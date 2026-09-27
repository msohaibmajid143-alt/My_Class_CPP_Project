#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number: ";
    cin >> month;

    if (month == 1)
        cout << "January";
    else if (month == 2)
        cout << "February";
    else if (month == 3)
        cout << "March";
    else if (month == 4)
        cout << "April";
    else if (month == 5)
        cout << "May";
    else if (month == 6)
        cout << "June";

    return 0;
}