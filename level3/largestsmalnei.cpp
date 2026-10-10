#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c;
    cout << "enter a 3 digit number:";
    cin >> n;
    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;
    if (b > a && b > c)
    {
        cout << " middle number is largest";
    }
    else if (b < a && b < c)
    {
        cout << "middle number is smallest";
    }
    else
    {
        cout << "number is neither";
    }
    return 0;
}
// Take a 3-digit number and determine if the middle digit is the largest, smallest, or neither