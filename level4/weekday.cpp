#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a weekday number 1 to 7:";
    cin >> num;
    if (num > 1 && num < 7)
    {
        cout << "it is a weekday";
    }
    else
    {
        cout << "it is a  weekend";
    }
    return 0;
}
// Take a weekday number (1–7) and determine if it is a weekday or weekend