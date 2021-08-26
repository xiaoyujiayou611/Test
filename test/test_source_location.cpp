#include <iostream>
#include <string_view>
#include <source_location>
 
void log(std::string_view message,
         const std::source_location& location = std::source_location::current())
{
    std::cout << "info:"
              << location.file_name() << ":"
              << location.line() << " "
	      << location.function_name() << " "
              << message << '\n';
}
 
int main()
{
    log("Hello world!");
    return 0;
}


