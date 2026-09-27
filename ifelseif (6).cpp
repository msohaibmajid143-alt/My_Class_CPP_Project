#include <iostream>
using namespace std;

int main() {
    int light;
    cout << "Enter 1 for Red, 2 for Yellow, 3 for Green: ";
    cin >> light;

    if (light == 1)
        cout << "Stop";
    else if (light == 2)
        cout << "Wait";
    else if (light == 3)
        cout << "Go";

    return 0;
}