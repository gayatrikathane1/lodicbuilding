#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    if (n % 7 == 0 && n % 10 == 7)
    {
        cout << "number is a multiple of 7 or ends with 7";
    }
    else
    {
        cout << "number is not a multiple of 7 or ends with 7";
    }
    return 0;
}
// Check if a number is a multiple of 7 or ends with 7