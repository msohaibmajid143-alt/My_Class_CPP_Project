#include <iostream>
using namespace std;

int main()
{
    int state;

    cout << "Enter traffic light state:" << endl;
    cout << "1. Red" << endl;
    cout << "2. Green" << endl;
    cout << "3. Yellow" << endl;

    cout << "Enter state: ";
    cin >> state;

    switch(state)
    {
        case 1:
            cout << "Red -> Green";
            break;

        case 2:
            cout << "Green -> Yellow";
            break;

        case 3:
            cout << "Yellow -> Red";
            break;

        default:
            cout << "Invalid state";
    }

    return 0;
}
