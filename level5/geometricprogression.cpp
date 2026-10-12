#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter a three numbers:";
    cin >> a >> b >> c;
    if (b / a == c / b)
    {
        cout << " they are in geometric progression";
    }
    else
    {
        cout << " they are not  in geometric progression";
    }

    return 0;
}
// Take three numbers and check if Take three numbers and check if they are in geometric progression