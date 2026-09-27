#include <iostream>
using namespace std;

int main()
{
    int choice;
    float payment;

    int chipsStock = 5;
    int drinkStock = 3;
    int chocolateStock = 2;

    cout << "===== VENDING MACHINE =====" << endl;
    cout << "1. Chips - Rs. 100" << endl;
    cout << "2. Drink - Rs. 150" << endl;
    cout << "3. Chocolate - Rs. 200" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            if(chipsStock > 0)
            {
                cout << "Enter payment: ";
                cin >> payment;

                if(payment >= 100)
                {
                    cout << "Chips dispensed." << endl;
                    cout << "Change = Rs. " << payment - 100;
                    chipsStock--;
                }
                else
                {
                    cout << "Insufficient payment.";
                }
            }
            else
            {
                cout << "Chips are out of stock.";
            }
            break;

        case 2:
            if(drinkStock > 0)
            {
                cout << "Enter payment: ";
                cin >> payment;

                if(payment >= 150)
                {
                    cout << "Drink dispensed." << endl;
                    cout << "Change = Rs. " << payment - 150;
                    drinkStock--;
                }
                else
                {
                    cout << "Insufficient payment.";
                }
            }
            else
            {
                cout << "Drink is out of stock.";
            }
            break;

        case 3:
            if(chocolateStock > 0)
            {
                cout << "Enter payment: ";
                cin >> payment;

                if(payment >= 200)
                {
                    cout << "Chocolate dispensed." << endl;
                    cout << "Change = Rs. " << payment - 200;
                    chocolateStock--;
                }
                else
                {
                    cout << "Insufficient payment.";
                }
            }
            else
            {
                cout << "Chocolate is out of stock.";
            }
            break;

        default:
            cout << "Invalid choice.";
    }

    return 0;
}
