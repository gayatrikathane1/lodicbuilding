#include <iostream>
using namespace std;

int main()
{

    int n, a, b, c;
    cout << "enter a three digit number:";
    cin >> n;
    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;
    if (a != b && b != c && a != c)
    {
        cout << "all digits are distinct";
    }
    else
    {
        cout << "all digits are not distinct";
    }

    return 0;
}
// Take a 3-digit number and check if all digits are distinct