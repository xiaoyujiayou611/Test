#include <iostream>
#include <chrono>
#include <ctime>

int main()
{
    /*
    // uint64_t sys_now = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    // std::cout << "sys_clock:" << sys_now << std::endl;
    // uint64_t steady_now = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now().time_since_epoch()).count();
    // std::cout << "steady_clock:" << steady_now << std::endl;
    // uint64_t high_now = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now().time_since_epoch()).count();
    // std::cout << "high_resolution_clock:" << high_now << std::endl;
    */

    using namespace std;
    using namespace std::chrono;
    /*
    // system_clock::time_point x;
    // time_t t_epoch = system_clock::to_time_t(x);
    // std::cout << "epoch: " << ctime(&t_epoch);

    // system_clock::time_point now = system_clock::now();
    // time_t t_now = system_clock::to_time_t(now);
    // std::cout << "now: " << ctime(&t_now);

    // std::cout << duration_cast<chrono::hours>(now.time_since_epoch()).count() << " hours since epoch" << std::endl;

    // using day_t = duration<int, ratio<24 * 60 * 60>>;
    // std::cout << duration_cast<day_t>(now.time_since_epoch()).count() << " days since epoch" << std::endl;
    */

    /*
    // system_clock::time_point epoch;
    // system_clock::time_point now_time = system_clock::now();
    // system_clock::duration my_time_since_epoch = now_time - epoch;
    // cout << "my_time_since_epoch: " << my_time_since_epoch.count() << endl;
    // uint64_t timestamp = now_time.time_since_epoch().count();
    // cout << "timestamp: " << timestamp << endl;
    */
    auto time_point = system_clock::now();
    auto nano_timepoint = time_point_cast<nanoseconds>(time_point);
    time_t nano_seconds = system_clock::to_time_t(nano_timepoint);
    cout << "nano_timestamp: " << nano_seconds << endl;
    cout << "time_t: " << time_point.time_since_epoch().count() << endl;

    return 0;
}