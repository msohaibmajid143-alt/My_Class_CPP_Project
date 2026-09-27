#include <iostream>
using namespace std;

int main() {
    string username, password;
    string status;

    cout << "Enter username: ";
    cin >> username;

    if (username == "urrrs_shabeee") {

        cout << "Enter password: ";
        cin >> password;

        if (password == "sohaib@1221") {

            cout << "Enter account status (active/inactive): ";
            cin >> status;

            if (status == "active") {
                cout << "Login successful.";
            }
            else {
                cout << "Account is inactive.";
            }

        }
        else {
            cout << "Incorrect password.";
        }

    }
    else {
        cout << "Incorrect username.";
    }

    return 0;
}
