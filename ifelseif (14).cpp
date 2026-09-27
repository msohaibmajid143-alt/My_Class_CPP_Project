#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0)
        cout << "Zero";
    else if (num > 0 && num <= 50)
        cout << "Positive and between 1 and 50";
    else if (num > 50)
        cout << "Positive and greater than 50";
    else if (num < 0)
        cout << "Negative";

    return 0;
}