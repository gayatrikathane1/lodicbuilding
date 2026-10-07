#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number:";
    cin >> num;
    if (num % 5 == 0)
    {
        cout << "number is divisible by 5";
    }
    else
    {
        cout << " number is not divisible by 5";
    }
    return 0;
}
//cheack if number is divisible by 5