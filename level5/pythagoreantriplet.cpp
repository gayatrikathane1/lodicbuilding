#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter a three numbers:";
    cin >> a >> b >> c;
    if (a * a + b * b == c * c)
    { 
        cout << "Pythagorean triplet";
    }
    else
    {
        cout << " not a Pythagorean triplet";
    }

    return 0;
}
// Take three numbers and check if they can form a Pythagorean triplet.