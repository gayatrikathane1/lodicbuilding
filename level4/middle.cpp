#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "enter a three numbers:";
    cin >> num1 >> num2 >> num3;
    if (num1 && num2 && num3)
    {
        cout << "median is:" << num2;
    }
    else
    {
        cout << "neither";
    }

    return 0;
}
// take three numbers and print the median value (neither maximum nor minimum)