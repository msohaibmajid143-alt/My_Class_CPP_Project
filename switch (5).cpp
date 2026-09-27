#include <iostream>
using namespace std;

int main()
{
    int choice;
    string item;

    cout << "===== MENU =====" << endl;
    cout << "1. Add" << endl;
    cout << "2. View" << endl;
    cout << "3. Delete" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Enter item: ";
            cin >> item;
            cout << "Item added successfully.";
            break;

        case 2:
            cout << "View item: " << item;
            break;

        case 3:
            item = "";
            cout << "Item deleted successfully.";
            break;

        case 4:
            cout << "Exiting program...";
            break;

        default:
            cout << "Invalid choice.";
    }

    return 0;
}
