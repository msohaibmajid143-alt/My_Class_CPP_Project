#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num >= 1 && num <= 10)
        cout << "Between 1 and 10";
    else if (num >= 11 && num <= 20)
        cout << "Between 11 and 20";
    else if (num > 20)
        cout << "Greater than 20";

    return 0;
}