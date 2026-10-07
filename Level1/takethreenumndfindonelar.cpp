#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "enter a first number:";
    cin >> num1;
    cout << "enter a second number:";
    cin >> num2;
    cout << "enter a third number:";
    cin >> num3;
    if (num1 > num2 && num1 > num3)
    {
        cout << "largest number:" << num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "largest number:" << num2;
    }
    else
    {
        cout << "largest number:" << num3;
    }
    return 0;
}