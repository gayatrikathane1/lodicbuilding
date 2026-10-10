#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    if (n <= 9)
    {
        cout << "single digit number";
    }
    else if (n <= 99)
    {
        cout << "double digit number";
    }
    else
    {
        cout << "multiple digits";
    }

    return 0;
}
// Check whether a given integer is single-digit, double-digit, or multi-digi