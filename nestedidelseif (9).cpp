#include <iostream>
using namespace std;

int main() {
    int attendance, marks;

    cout << "Enter attendance percentage: ";
    cin >> attendance;

    if (attendance >= 75) {

        cout << "Enter marks: ";
        cin >> marks;

        if (marks >= 50) {
            cout << "Pass.";
        }
        else {
            cout << "Fail: Marks are below 50.";
        }

    }
    else {
        cout << "Fail: Attendance is below 75%.";
    }

    return 0;
}
