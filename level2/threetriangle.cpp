#include <iostream>
using namespace std;
int main()
{
    int a, b, c ;
    cout << "enter a 3 sides:";
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
        cout << "triangle is quilateral";
    }
    else if (a == b && b == c && a == c)
    {
        cout << "triangle is isoscalic";
    }
    else
    {
        cout << "scalene";
    }
    return 0;
}
// If the sides form a valid triangle, determine whether it is equilateral, isosceles, or scalene