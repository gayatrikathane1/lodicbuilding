#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter a three digit number:";
    cin >> a >> b >> c;
    if (a + c == b)
    {
        cout << "correct";
    }
    else
    {
        cout << "not correct";
    }

    return 0;
}
// Take a 3-digit number and check if the sum of
//  the first and last digit equals the middle digit.