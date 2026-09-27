#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 10 == 0)
        cout << "Divisible by 10";

    return 0;
}