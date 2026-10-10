#include <iostream>
using namespace std;

int main() {
    int hour;
    cout<<"enter a  time";
    cin >> hour;

    if (hour >= 5 && hour <= 11) {
        cout << "Good Morning";
    }
    else if (hour >= 12 && hour <= 16) {
        cout << "Good Afternoon";
    }
    else if (hour >= 17 && hour <= 20) {
        cout << "Good Evening";
    }
    else if ((hour >= 21 && hour <= 23) || (hour >= 0 && hour <= 4)) {
        cout << "Good Night";
    }
    else {
        cout << "Invalid hour";
    }

    return 0;
}