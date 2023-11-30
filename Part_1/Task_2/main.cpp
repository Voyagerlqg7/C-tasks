#include<iostream>
#include<string>
#include<vector>

using namespace std;

template<typename T>
void Check_Smallest_Positive_number(const std::vector<T>& arr) {
    T min = std::numeric_limits<T>::max();

    for (const T& elem : arr) {
        if (elem < 0) {
            std::cout << "ERROR: negative number in array" << std::endl;
            return; // Выходим из функции, если встречено отрицательное число
        }
        else if (elem > 0 && elem < min) {
            min = elem;
        }
    }

    std::cout << "The smallest element in array: " << min << std::endl;
}
int main() {
    vector<int> arr = { 235,345,356,657,57867,8,241235,67,677878,3,342 };
    Check_Smallest_Positive_number(arr);
    vector<int> arr_2 = { 235,345,356,657,57867,8,241235,67,-677878,3,342 };
    Check_Smallest_Positive_number(arr_2);
    return 0;
}