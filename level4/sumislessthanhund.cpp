#include <iostream>
using namespace std;

int main()
{
    int num, num1, num2, sum;
    cout << "enter a two numbers:";
    cin >>num1>>num2;
    sum = num1 + num2;
    if (num1 > 0 && num2>0&& sum < 100)
    {
        cout << "both are positive and their sum is less than 100";
    }
    else
    {
        cout << "not both are positive and their sum is less than 100";
    }

    return 0;
}
// Take two numbers and check if both are positive and their sum is less than 100