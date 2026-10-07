#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    if (num % 3 == 0 && num % 5 == 0)
    {
        cout << "number is divisible by both 3 and 5";
    }
    else
    {
        cout << "number is not divisible by both";
    }
    return 0;
}
//check if a number is divisible by 3&5