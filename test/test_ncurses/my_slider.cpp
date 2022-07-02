
#include <ncurses_dll.h>
#include <panel.h>
#include <menu.h>
#include <ncurses.h>
#include <string.h>
#include <stdlib.h>

WINDOW* create_win(int height, int width, int y, int x, int color);
void destroy_win(WINDOW* win);
void print_in_middle(WINDOW *win, int starty, int startx, char *string, int color);
struct ImuData
{
    int x;
    int y;
    int z;
};


int main()
{	WINDOW *slider_win;
    WINDOW *slider;
    WINDOW *menu_win;
    PANEL* slider_win_panel;
    PANEL* slider_panel, *stack_top;
    ITEM** inputs_items;
    MENU* inputs_menu;
    char pre_press_key = ' ';
    char *inputs[] = {"imu_data", "vehicle_speed", "wheel_speed"};
    int topics_count = 3;
    int height, width, y, x, begin_x, end_x;
	int ch;
    bool stop = false;
    bool choice_flag = false;
	initscr();
	start_color();
	cbreak();
	noecho();
    keypad(stdscr, true);		/* I need that nifty F1 	*/
    nodelay(stdscr, true);
    curs_set(0);
    // init_pair(1, COLOR_RED, COLOR_WHITE);
	// init_pair(2, COLOR_GREEN, COLOR_BLACK);
	// init_pair(3, COLOR_BLUE, COLOR_BLACK);
	// init_pair(4, COLOR_BLACK, COLOR_WHITE);
    
    slider_win = create_win(2, COLS-4, LINES-4, 3, 4);
    height = 4;
    width = 3;
    y = LINES - 5;
    x = 3;
    begin_x = x;
    end_x = x + COLS-4-3;
    slider = create_win(4, 3, LINES-5, 3, 1);
    slider_win_panel = new_panel(slider_win);
    slider_panel = new_panel(slider);
    
    inputs_items = (ITEM**)calloc(topics_count + 1, sizeof(ITEM*));
    for (int i = 0; i < topics_count; i++) {
        inputs_items[i] = new_item(inputs[i], inputs[i]);
    }    
    inputs_items[topics_count] = (ITEM*)NULL;
    inputs_menu = new_menu((ITEM**)inputs_items);
    menu_win = newwin(20, 30, 2, 1);
    wrefresh(menu_win);

    set_menu_win(inputs_menu, menu_win);
    set_menu_sub(inputs_menu, derwin(menu_win, 15, 20, 2, 1));
    
    set_menu_mark(inputs_menu, "*");
    set_menu_opts(inputs_menu, O_ROWMAJOR);
    update_panels();
    doupdate();

    WINDOW* content_win = newwin(20, 15, 8, 1);
    ImuData imu_data;
    imu_data.x = 10;
    imu_data.y = 20;
    imu_data.z = 30;
    while((ch = getch()) != 'q')
	{	
        switch(ch)
		{	case KEY_LEFT:
                if ( x > begin_x && !stop) {
                    
                    x--;
                    move_panel(slider_panel, y, x);
                    update_panels();
                    doupdate();
                    refresh();
                }
				break;
			case KEY_RIGHT:
                if (x < end_x && !stop) {
                   
                    x++;
                    move_panel(slider_panel, y, x);
                    update_panels();
                    doupdate();
                    refresh();
                }
				break;
            case KEY_UP:
                if (pre_press_key == 10) {
                    wmove(content_win, 20, 2);
                    wclear(content_win);
                    destroy_win(content_win);
                }
               
                menu_driver(inputs_menu, REQ_UP_ITEM);
                wrefresh(menu_win);
                pre_press_key = KEY_UP;
                break;
            case KEY_DOWN:
                if (pre_press_key == 10) {
                    wmove(content_win, 20, 2);
                    wclear(content_win);
                    destroy_win(content_win);
                }
                menu_driver(inputs_menu, REQ_DOWN_ITEM);
                wrefresh(menu_win);
                pre_press_key = KEY_DOWN;
                break;
			case ' ':
                if (pre_press_key == 10) {
                    wmove(content_win, 20, 2);
                    wclear(content_win);
                    destroy_win(content_win);
                }
                if (stop == true) {
                    stop = false;
                    move(2, 3);
                    clrtoeol();
                    unpost_menu(inputs_menu);
                    wrefresh(menu_win);
                } else {
                    stop = true;
                    mvprintw(2, 3, "inputs:");
                    refresh();
                    post_menu(inputs_menu);
                    wrefresh(menu_win);
                }
                pre_press_key = ' ';
                break;
            case 10:
                {
                    const char* topic = item_name(current_item(inputs_menu));
                    //mvprintw(20, 0, "topic selected is : %s", topic);
                    box(content_win, 0, 0);
                    mvwprintw(content_win, 10, 2, "x: %d y:%d z:%d", imu_data.x, imu_data.y, imu_data.z);
                    wrefresh(content_win);
                    pos_menu_cursor(inputs_menu);
                    pre_press_key = 10;
                }
                break;

            default:
                if (stop == false) {
                    if (x < end_x) {
                    x++;
                    printf("hello_world!!!");
                    move_panel(slider_panel, y, x);
                    update_panels();
                    doupdate();
                    refresh();
                    } else {
                        x = 0;
                    }
                }
                
				break;
		}
    }
    refresh();
    //ch = getch();
    delwin(slider_win);
    delwin(slider);
    delwin(menu_win);
    delwin(content_win);
    for (int i = 0; i < topics_count; i++) {
        free_item(inputs_items[i]);
    }
    free_menu(inputs_menu);
    
    endwin();
	return 0;
}

WINDOW* create_win(int height, int width, int y, int x, int color) {
    WINDOW* local_win = newwin(height, width, y, x);
    //wbkgd(local_win, COLOR_PAIR(color));
    box(local_win, 0, 0);
    wrefresh(local_win);
    return local_win;
}

void destroy_win(WINDOW *local_win)
{	
	wborder(local_win, ' ', ' ', ' ',' ',' ',' ',' ',' ');
	wrefresh(local_win);
	//delwin(local_win);
}

void print_in_middle(WINDOW *win, int starty, int startx, char *string, int color)
{	int length, x, y;
	float temp;

	if(win == NULL)
		win = stdscr;
	getyx(win, y, x);
	if(startx != 0)
		x = startx;
	if(starty != 0)
		y = starty;
	wattron(win, color);
	mvwprintw(win, y, x, "%s", string);
	wattroff(win, color);
} 
