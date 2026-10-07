#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "enter a first number:";
    cin >> num1;
    cout << "enter a second number:";
    cin >> num2;
    if (num1 > num2)
    {
        cout << "largest number:" << num1;
    }
    else if (num2 > num1)
    {
        cout << "largest number:" << num2;
    }
    else
    {
        cout << "both numbers are equal";
    }
    return 0;
}
//take a 2 numbers and find largest one