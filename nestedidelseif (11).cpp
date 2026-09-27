#include <iostream>
using namespace std;

int main() {
    string department;
    int score;

    cout << "Enter department: ";
    cin >> department;

    if (department == "IT") {

        cout << "Enter performance score: ";
        cin >> score;

        if (score >= 80) {
            cout << "Eligible for bonus.";
        }
        else {
            cout << "Not eligible: Performance score is too low.";
        }

    }
    else {
        cout << "Not eligible: Department is not IT.";
    }

    return 0;
}
