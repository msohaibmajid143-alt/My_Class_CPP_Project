#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 1 && num <= 100) {

        if (num % 5 == 0) {
            cout << "Number is within the range and is a multiple of 5.";
        }
        else {
            cout << "Number is within the range but is not a multiple of 5.";
        }

    }
    else {
        cout << "Number is outside the range.";
    }

    return 0;
}
