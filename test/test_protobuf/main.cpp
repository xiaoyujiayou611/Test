#include <cstdlib>
#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string>
#include <fstream>
#include <unistd.h>
#include <ncurses_dll.h>
#include <ncurses.h>
#include <menu.h>

#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <google/protobuf/text_format.h>
#include "test_proto3.pb.h"

bool read_config(const std::string& filename, protobuf::test::Test* config) {
    using google::protobuf::TextFormat;
    using google::protobuf::io::FileInputStream;
    using google::protobuf::io::ZeroCopyInputStream;

    int fd = open(filename.c_str(), O_RDONLY);
    if (fd < 0) {
        std::cout << "failed to open config:" << filename << "\n";
        return false;
    }

    ZeroCopyInputStream* inputs = new FileInputStream(fd);
    std::cout << "test" << std::endl;
    bool ret = TextFormat::Parse(inputs, config);

    close(fd);
    delete inputs;

    return ret;
}

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))
#define CTRLD 	4

char *choices[] = {
                        "Choice 1",
                        "Choice 2",
                        "Choice 3",
                        "Choice 4",
                        "Exit",
                  };
// namespace test {
// namespace ncurse {
	
class TestNcurses {
public:
	void init() {
		initscr();
        cbreak();
        noecho();
        keypad(stdscr, TRUE);
        
        n_choices = ARRAY_SIZE(choices);
        my_items = (ITEM **)calloc(n_choices + 1, sizeof(ITEM *));

        for(i = 0; i < n_choices; ++i)
                my_items[i] = new_item(choices[i], choices[i]);
        my_items[n_choices] = (ITEM *)NULL;

        my_menu = new_menu((ITEM **)my_items);
        set_menu_mark(my_menu, "*");
        set_menu_opts(my_menu, O_ROWMAJOR);
        mvprintw(LINES - 2, 0, "F1 to Exit");
        post_menu(my_menu);
        refresh();

	}
	void release() {
        free_item(my_items[0]);
        free_item(my_items[1]);
        free_menu(my_menu);
        endwin();
    }
private:
	ITEM **my_items;
	int c;				
	MENU *my_menu;
	int n_choices, i;
	ITEM *cur_item;
};
// }
// }
int main (int argc, char** argv) {
    ::TestNcurses test_ncurses;
    test_ncurses.init();
    test_ncurses.release();
    
    std::string file_name("/home/ubuntu/haomo/hios-tracing/test_protobuf/test_proto3.prototxt");
    protobuf::test::Test test;
    if (read_config(file_name, &test)) {
        std::cout << "a: " << test.a() << std::endl;
        std::cout << "b: " << test.b() << std::endl;
        std::cout << "c: " << test.c() << std::endl;
        std::cout << "timeout: " << test.timeout() << std::endl;
        std::string serialize_str;
        test.SerializeToString(&serialize_str);
        std::string debug_str = test.DebugString();;
        std::cout << "serialize_str:" << serialize_str << std::endl;
        std::cout << "debug_str:" << debug_str << std::endl;
    } else {
	    std::cout << "failed to parse file." << std::endl;
    }
    return 0;
}
