#include <iostream>
using namespace std;

int main() {
    int day, month, year;

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter year: ";
    cin >> year;

    if (month >= 1 && month <= 12) {

        if (month == 2) {

            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {

                if (day >= 1 && day <= 29)
                    cout << "Valid date.";
                else
                    cout << "Invalid date.";

            }
            else {

                if (day >= 1 && day <= 28)
                    cout << "Valid date.";
                else
                    cout << "Invalid date.";
            }

        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) {

            if (day >= 1 && day <= 30)
                cout << "Valid date.";
            else
                cout << "Invalid date.";
        }
        else {

            if (day >= 1 && day <= 31)
                cout << "Valid date.";
            else
                cout << "Invalid date.";
        }

    }
    else {
        cout << "Invalid month.";
    }

    return 0;
}
