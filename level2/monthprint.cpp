#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "enter a month number(1-12):";
    cin >> month;
    if (month == 1)
    {
        cout << "31 days";
    }
    else if (month == 2)
    {
        cout << "28 days";
    }
    else if (month == 3)
    {
        cout << "31 days";
    }
    else if (month == 4)
    {
        cout << "30 days";
    }
    else if (month == 5)
    {
        cout << "31 days";
    }
    else if (month == 6)
    {
        cout << "30 days";
    }

    else if (month == 7)
    {
        cout << "31 days ";
    }
    else if (month == 8)
    {
        cout << "31 days ";
    }
    else if (month == 9)
    {
        cout << " 30 days";
    }
    else if (month == 10)
    {
        cout << " 31 days";
    }
    else if (month == 11)
    {
        cout << "30 days ";
    }
    else if (month == 12)
    {
        cout << "31 days";
    }
    else
    {
        cout << "invalid month";
    }

    return 0;
}
// Take a month number (1–12) and print the number of days in that month (ignore leap years)