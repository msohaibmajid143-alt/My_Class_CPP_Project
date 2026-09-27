#include <iostream>
using namespace std;

int main() {
    int age;
    char resident;

    cout << "Are you a resident? (Y/N): ";
    cin >> resident;

    if (resident == 'Y' || resident == 'y') {
        cout << "Enter your age: ";
        cin >> age;

        if (age >= 18) {
            cout << "Eligible for driving license.";
        }
        else {
            cout << "Not eligible: Age is below 18.";
        }
    }
    else {
        cout << "Not eligible: You are not a resident.";
    }

    return 0;
}
