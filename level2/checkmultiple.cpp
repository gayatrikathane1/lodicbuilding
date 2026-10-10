#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a number a:";
    cin >> a;
    cout << "Enter a number b:";
    cin >> b;
    if (a != 0 && b != 0&&(a % b == 0 || b % a == 0))
    {
        cout << "one number is multiple to other";
    }
    else
    {
        cout << "not multipe to other";
    }
    return 0;
}
// Check if one of two given numbers is a multiple of the other
