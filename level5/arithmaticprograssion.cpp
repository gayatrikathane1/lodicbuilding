#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter a three numbers:";
    cin >> a >> b >> c;
    if (b - a == c - b)
    {
        cout << "they are in arithmetic progression";
    }
    else
    {
        cout << "they are not  in arithmetic progression";
    }

    return 0;
}
// Take three numbers and check if they are in arithmetic progression