#include <iostream>
using namespace std;

int main() {
    int age;
    string day;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 12) {

        cout << "Enter day (weekday/weekend): ";
        cin >> day;

        if (day == "weekend") {
            cout << "Ticket price = Rs. 500";
        }
        else {
            cout << "Ticket price = Rs. 300";
        }

    }
    else {

        cout << "Enter day (weekday/weekend): ";
        cin >> day;

        if (day == "weekend") {
            cout << "Ticket price = Rs. 1000";
        }
        else {
            cout << "Ticket price = Rs. 700";
        }

    }

    return 0;
}
