#include <iostream>
using namespace std;
int main() {
    int password;
    cout << "Enter password: ";
    cin >> password;
    if (password == 1234)
        cout << "Correct Password";
    else
        cout << "Incorrect Password";

    return 0;
}
