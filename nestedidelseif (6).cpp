#include <iostream>
using namespace std;

int main() {
    int income, creditScore;

    cout << "Enter your monthly income: ";
    cin >> income;

    if (income >= 50000) {

        cout << "Enter your credit score: ";
        cin >> creditScore;

        if (creditScore >= 700) {
            cout << "Eligible for loan.";
        }
        else {
            cout << "Not eligible: Credit score is too low.";
        }

    }
    else {
        cout << "Not eligible: Income is too low.";
    }

    return 0;
}
