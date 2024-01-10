#include <iostream>
#include <windows.h>
#include <ctime>
#include <conio.h>
#include <string>

int main() {
    std::cout << "Clock work 03 minutes or until press any key\n\n";
    Sleep(1000);
    SYSTEMTIME locTime;
    int i{ 0 };
    std::string h, m, s;
    while (++i <= 180) {
        GetLocalTime(&locTime);
        h = locTime.wHour < 10 ? "0" + std::to_string(locTime.wHour) :
            std::to_string(locTime.wHour);
        m = locTime.wMinute < 10 ? "0" + std::to_string(locTime.wMinute) :
            std::to_string(locTime.wMinute);
        s = locTime.wSecond < 10 ? "0" + std::to_string(locTime.wSecond) :
            std::to_string(locTime.wSecond);
        std::cout << "\rThe current time is : " << h << ":" << m << ":" << s << std::flush;
        Sleep(1000);
        if (_kbhit()) break;
    }
    return 0;
}