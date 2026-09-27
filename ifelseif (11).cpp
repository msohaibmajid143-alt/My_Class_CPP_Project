#include <iostream>
using namespace std;

int main() {
    int units;
    cout << "Enter units: ";
    cin >> units;

    if (units <= 100)
        cout << "Low usage";
    else if (units <= 300)
        cout << "Medium usage";
    else if (units > 300)
        cout << "High usage";

    return 0;
}