#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter  single digit 0 to 9:";
    cin >> num;
    if (num == 0)
    {
        cout << "zero";
    }
    else if (num == 1)
    {
        cout << "one";
    }
    else if (num == 2)
    {
        cout << "two";
    }
    else if (num == 3)
    {
        cout << "three";
    }
    else if (num == 4)
    {
        cout << "four";
    }
    else if (num == 5)
    {
        cout << "five";
    }
    else if (num == 6)
    {
        cout << "six";
    }
    else if (num == 7)
    {
        cout << "seven";
    }
    else if (num == 8)
    {
        cout << "eight";
    }
    else if (num == 9)
    {
        cout << "nine";
    }
    else
    {
        cout << "invalid";
    }

    return 0;
}
// Take a single digit (0–9) and print its word form (“Zero” to “Nine”)