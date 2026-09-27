#include <iostream>
using namespace std;

int main()
{
    char signal;

    cout << "Enter traffic signal (R, Y, G): ";
    cin >> signal;

    switch(signal)
    {
        case 'R':
        case 'r':
            cout << "Stop";
            break;

        case 'Y':
        case 'y':
            cout << "Wait";
            break;

        case 'G':
        case 'g':
            cout << "Go";
            break;

        default:
            cout << "Invalid signal";
    }

    return 0;
}
