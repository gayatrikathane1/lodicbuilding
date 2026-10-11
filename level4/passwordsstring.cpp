#include <iostream>
using namespace std;

int main()
{
    int string, num, length;
    cout << "enter a password:";
    cin >> length ;
   
    if (length >= 8&&num > 0 && string > 'a' && string < 'z')
    {
        cout << "password is correct";
    }
    else
    {
        cout << "not correct";
    }

    return 0;
}
// Take a password string and check basic rules (length ‡ 8 and contains at least one digit).