#include <iostream>
using namespace std;

int main()
{
    int temprature;
    cout << "enter a degreecelcious:";
    cin >> temprature;
    if (temprature < 0)
    {
        cout << "temprature is cold";
    }
    else if (temprature < 30)
    {
        cout << "temprature is warm";
    }
    else
    {
        cout << "temprature is hot";
    }

    return 0;
}
//check temprature hot,cold or warm