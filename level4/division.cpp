#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    if (n % 3 == 0 && n % 5 == 0)
    {
        cout << "FizzBuzz";
    }

    else if (n % 3 == 0)
    {
        cout << "Fizz";
    }
    else if (n % 5 == 0)
    {
        cout << "Fizz";
    }
    else
    {
        cout << "neiither";
    }

    return 0;
}
// Take a number and print “Fizz” if divisible by 3, “c” if divisible by 5,
// and “FizzBuzz” if divisible by both