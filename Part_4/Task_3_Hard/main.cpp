#include <iostream>
#include <algorithm>

int* sortArr(int* a, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    return a;
}

int* fillArr(int* a, int n)
{
    for (int i = 0; i < n; ++i)
        std::cin >> a[i];

    return a;
}

void printArr(int* a, int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << a[i] << ' ';
    }
    std::cout << '\n';
}

int* unionArr(int* a, int* b, int n, int m)
{
    int* c = new int[n + m];
    int p = 0;
    for (int i = 0; i < n; ++i)
    {
        c[p++] = a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        c[p++] = b[i];
    }

    return c;
}

int main()
{
    std::cout << "How many elements do you want to enter to the first array?: ";
    int n;
    std::cin >> n;

    std::cout << "How many elements do you want to enter to the second array?: ";
    int m;
    std::cin >> m;

    int* a = new int[n];
    int* b = new int[m];

    std::cout << "Enter the elements of the first array: ";
    a = fillArr(a, n);
    std::cout << "Enter the elements of the second array: ";
    b = fillArr(b, m);

    // printArr(sortArr(a, n), n);
    // printArr(sortArr(b, m), m);

    int* c = unionArr(a, b, n, m);

    c = sortArr(c, n + m);

    std::cout << "Result array: ";
    printArr(c, n + m);
}