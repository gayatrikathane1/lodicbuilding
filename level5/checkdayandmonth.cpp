#include <iostream>
using namespace std;

int main()
{
    int day, month;
    cout << "enter a day and month:";
    cin >> day >> month;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (day >= 1 && day <= 31)
        {
            cout << "valid date ";
        }
        else
        {
            cout << "invalid";
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day >= 1 && day <= 30)
        {
            cout << "valid date";
        }
        else
        {
            cout << "invalid";
        }
    }
    else if (month == 2)
    {
        if (day >= 1 && day <= 28)
        {
            cout << "valid date";
        }
        else
        {
            cout << "invalid";
        }
    }
    else
    {
        cout << "invalid date";
    }

    return 0;
}
// Take day and month and check if it forms a valid calendar date (ignoring leap years).