#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    if (num1 % 2 == 0 && num2 % 2 == 0)
    {
        cout << "both numbers are even";
    }
    else if (num1 % 2 != 0 && num2 % 2 != 0)
    {
        cout << "both numbers are odd";
    }
    else
    {
        cout << "one number is odd & one number is even";
    }

    return 0;
}
//Take two numbers and determine whether both are even, both are odd, or one is even and one is odd