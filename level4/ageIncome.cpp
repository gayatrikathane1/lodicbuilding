#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    int income;
    cout << "enter a age:";
    cin >> age;
    cout << "enter a income:";
    cin >> income;
    if (age > 18 && income > 500000)
    {
        cout << "eligible for tax";
    }
    else
    {
        cout << "not eligible for tax";
    }

    return 0;
}
// Take income and age, and check if eligible for tax (age > 18 and income > 5 L).