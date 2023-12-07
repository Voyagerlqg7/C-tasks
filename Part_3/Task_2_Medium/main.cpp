#include <iostream>

int main()
{
    std::cout << "Enter amount of summed numbers: ";
    int n;
    std::cin >> n;

    int sum = 0;
    int num = 0;
    for (int i = 0; i < n; ++i)
    {
        num += 2;
        sum += num;
    }

    std::cout << "The sum of first " << n << " whole positive even numbers is " << sum << '\n';
    return 0;
}