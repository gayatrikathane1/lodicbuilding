#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter a marks:";
    cin >> marks;

    if (marks > 90 && marks <= 100)
    {
        cout << "grade A";
    }
    else if (marks < 90 && marks >= 70)
    {
        cout << "grade B";
    }
    else if (marks <= 60 && marks >= 40)
    {
        cout << "grade C";
    }
    else
    {
        cout << "grade D";
    }
    return 0;
}
//Take marks (0–100) and print the corresponding grade (A/B/C/D)
