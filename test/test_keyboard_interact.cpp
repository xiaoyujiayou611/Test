#include </usr/include/ncurses.h>
//#include <termios.h>
#include <iostream>
#include <thread>
#include <string>
using namespace std;

// #define KEY_UP 72
// #define KEY_DOWN 80
// #define KEY_LEFT 75
// #define KEY_RIGHT 77




int main()
{

    initscr();
    noecho();
    keypad(stdscr, true);
    // // just for wakeup scan-thread, should use better solution.
    nodelay(stdscr, true);
    thread t = thread([]{
        int c = 0;
        while(1)
        {
            c = getch();
            if (c != ERR) {
                while (getch() == c) {
                }
            }
            string s;
            switch((c)) {
            case KEY_UP:
                refresh();
                s = "up";
                mvaddstr(0, 1, s.c_str());
                //cout << endl << "Up" << endl;//key up
                break;
            case KEY_DOWN:
                refresh();
                s = "down";
                mvaddstr(0, 1, s.c_str());
                // refresh();
                // cout << endl << "Down" << endl;   // key down
                break;
            case KEY_LEFT:
                refresh();
                s = "left";
                mvaddstr(0, 1, s.c_str());
                // refresh();
                // cout << endl << "Left" << endl;  // key left
                break;
            case KEY_RIGHT:
                refresh();
                // cout << endl << "Right" << endl;  // key right
                s = "right";
                mvaddstr(0, 1, s.c_str());
                break;
            default:
                //cout << endl << "null" << endl;  // not arrow
                break;
            }

        }
    });
    t.join();
    endwin();

    return 0;
}