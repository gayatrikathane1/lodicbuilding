#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter a age:";
    cin >> age;
    if (age >= 18)
    {
        cout << "person is eligible for voting";
    }

    else
    {
        cout << "person is not eligible for voting";
    }
    return 0;
}
// Check voting eligibility for a given age (18+)