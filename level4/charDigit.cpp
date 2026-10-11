#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter a character:";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "it is a letter";
    }
    else if (ch >= 0 )
    {
        cout << "it is  a digit";
    }
    else
    {
        cout << "neither";
    }
    return 0;
}
// Take a character and check if it is a letter, a digit, or neither.