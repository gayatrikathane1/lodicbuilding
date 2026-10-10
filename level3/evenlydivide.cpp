#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "enter a amount:";
    cin >> amount;
    if (amount % 2000 == 0 && amount % 500 == 0 && amount % 100 == 0)
    {
        cout << "an amount can be evenly divided into 2000, 500, and 100";
    }
    else
    {
        cout << "an amount can not be evenly divided into 2000, 500, and 100";
    }

    return 0;
}
// Check if an amount can be evenly divided into 2000, 500, and 100 currency notes.