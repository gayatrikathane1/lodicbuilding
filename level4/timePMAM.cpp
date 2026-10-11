#include <iostream>
using namespace std;

int main()
{

    int hours, minutes;
    cout << "enter a  time:";
    cin >> hours >> minutes;
    if (hours >= 0 && hours < 12)
    {
        cout << "it is AM";
    }
    else
    {
        cout << "it is PM";
    }

    return 0;
}
// Take 24-hour time (hours and minutes) and print whether it is AM or PM