#include <iostream>
using namespace std;

int main()
{
    char command;

    cout << "Enter command (c = Copy, p = Paste, d = Delete): ";
    cin >> command;

    switch(command)
    {
        case 'c':
            cout << "Copy command selected." << endl;
            break;

        case 'p':
            cout << "Paste command selected." << endl;
            break;

        case 'd':
            cout << "Delete command selected." << endl;
            break;

        // Fall-through: 'q' and 'e' perform the same action
        case 'q':
        case 'e':
            cout << "Exit command selected.";
            break;

        default:
            cout << "Unknown command.";
    }

    return 0;
}
