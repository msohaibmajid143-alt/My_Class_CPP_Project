#include <iostream>
using namespace std;

int main() {
    string country, category;
    float weight;

    cout << "Enter country: ";
    cin >> country;

    if (country == "Pakistan") {

        cout << "Enter weight in kg: ";
        cin >> weight;

        if (weight <= 20) {

            cout << "Enter product category (general/restricted): ";
            cin >> category;

            if (category == "general") {
                cout << "Shipping is eligible.";
            }
            else {
                cout << "Shipping not eligible: Product is restricted.";
            }

        }
        else {
            cout << "Shipping not eligible: Weight exceeds 20 kg.";
        }

    }
    else {
        cout << "Shipping not eligible: Country is not supported.";
    }

    return 0;
}
