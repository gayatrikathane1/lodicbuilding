#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a number:";
    cin >> num;
    if (num >= 100 && num <= 999)
    {
        cout << "a number lies within the range 100, 999";
    }
    else
    {
        cout << "a number is do not  lies within the range 100, 999";
    }

    return 0;
}
// Check if a number lies within the range [100, 999].