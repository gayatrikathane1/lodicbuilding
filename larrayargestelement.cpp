#include <iostream>
using namespace std;

int main()
{
    int largest;
    int a, n;
    int arr[6] = {2, 5, 4, 3, 1, 1};
    largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        cout<<largest;
    }

    return 0;
}