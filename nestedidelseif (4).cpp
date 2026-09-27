#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

        if (ch >= 'A' && ch <= 'Z') {
            cout << "Character is an uppercase alphabet.";
        }
        else {
            cout << "Character is a lowercase alphabet.";
        }

    }
    else {
        cout << "Character is not an alphabet.";
    }

    return 0;
}JKAH
