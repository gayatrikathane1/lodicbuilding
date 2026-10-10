#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter a angle A:";
    cin >> a;
    cout << "enter a angle B:";
    cin >> b;
    c = 180 - (a + b);
    cout << "angle c is:" << c;

    return 0;
}
// take two angles of a triangle and compute the third angle