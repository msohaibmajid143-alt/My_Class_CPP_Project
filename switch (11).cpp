#include <iostream>
using namespace std;

int main()
{
    int choice;
    float balance = 10000;
    float amount;

    cout << "===== ATM MENU =====" << endl;
    cout << "1. Balance" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Deposit" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Your balance is: " << balance;
            break;

        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if(amount <= balance)
            {
                balance = balance - amount;
                cout << "Withdrawal successful." << endl;
                cout << "Remaining balance: " << balance;
            }
            else
            {
                cout << "Insufficient balance.";
            }
            break;

        case 3:
            cout << "Enter amount to deposit: ";
            cin >> amount;

            balance = balance + amount;
            cout << "Deposit successful." << endl;
            cout << "New balance: " << balance;
            break;

        case 4:
            cout << "Thank you for using the ATM.";
            break;

        default:
            cout << "Invalid choice. Please select 1-4.";
    }

    return 0;
}
