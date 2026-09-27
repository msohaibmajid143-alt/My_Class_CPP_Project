#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 1 && num <= 100) {

        if (num % 2 == 0) {
            cout << "Number is between 1 and 100 and it is even.";
        }
        else {
            cout << "Number is between 1 and 100 but it is odd.";
        }

    }
    else {
        cout << "Number is not between 1 and 100.";
    }

    return 0;
}
