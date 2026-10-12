#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "enter a coordinates:";
    cin >> x >> y;
    if (x == 0 && y == 0)
    {
        cout << " at the origin";
    }
    else if (y == 0)
    {
        cout << "the point lies on the X-axis";
    }
    else if (x == 0)
    {
        cout << "the point lies on the y-axis";
    }
    else
    {
        cout << "neither";
    }

    return 0;
}
// Take coordinates (x, y) and check if the point lies on the X-axis, Y-axis, or at the origin