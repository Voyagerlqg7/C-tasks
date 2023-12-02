#include <iostream>
#include<iomanip>
#include <string>

using namespace std;
void calcSpeed() {
    int distance = 0;
    std::cout << "Enter distance (in meters): ";
    std::cin >> distance;
    double t = 0.9;
    std::cout << "Enter time (in minutes.seconds): ";
    std::cin >> t;
    int m = t;
    double sec = (t - m) * 100 + (m * 60);
    double speed = distance / sec * 3.6;
    std::cout << "You runed with speed: " << speed << " km/h";
}
int main() {

    calcSpeed();
    return 0;
}