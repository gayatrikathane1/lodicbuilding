#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "enter x & y: ";
    cin >> x >> y;

    if (x > 0 && y > 0)
    {
        cout << "first Quadrant";
    }
    else if (x < 0 && y > 0)
    {
        cout << "second Quadrant";
    }
    else if (x < 0 && y < 0)
    {
        cout << "third Quadrant";
    }
    else if (x > 0 && y < 0)
    {
        cout << "fourth Quadrant";
    }
    else
    {
        cout << "point lies on X-axis or Y-axis";
    }

    return 0;
}
// Take coordinates (x, y) and determine which quadrant the point lies in