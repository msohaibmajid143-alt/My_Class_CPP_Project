#include <iostream>
using namespace std;
int main() 
{
    int money;
    cout << "Enter your money: ";
    cin >> money;
    if (money >= 1000)
        cout << "You can buy the product";
    else
        cout << "You cannot buy the product";

    return 0;
}