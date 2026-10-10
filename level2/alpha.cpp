#include <iostream>
using namespace std;
int main()
{
    int alphabet;
    cout << "enter a alphabet: ";
    cin >> alphabet;
    if (alphabet >= 'a' && alphabet <= 'm')
    {
        cout << "Alphabet lies between a&m";
    }
    else
    {
        cout << "Alphabet is lies between n & z";
    }
    return 0;
}
// Take an alphabet character and check if it lies between ‘a’ and ‘m’ or ‘n’ and ‘z’.

