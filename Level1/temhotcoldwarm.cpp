#include <iostream>
using namespace std;

int main()
{
    int temprature;
    if (temprature < 16)
    {
        cout << "wheather is cold";
    }
    else if (temprature < 30)
    {
        cout << "wheather is warm";
    }
    else
        {
            cout << "wheather is hot";
        }

    return 0;
}