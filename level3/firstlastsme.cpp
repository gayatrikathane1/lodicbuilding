#include <iostream>
using namespace std;

int main()
{
    int n, first, last;
    cout << "enter a four digit number:";
    cin >> n;
    first = n / 1000;
    last = n % 10;
     if (first == last)
    {
        cout << "first and last digits are equal";
    }
    else
    {
        cout << "first and last digits are  not equal";
    }
    return 0;
}

// Take a 4-digit number and check if the first and last digits are equal
