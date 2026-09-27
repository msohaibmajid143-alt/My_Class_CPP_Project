#include <iostream>
using namespace std;
int main()
 {
    int age1, age2;
    cout << "Enter first person's age: ";
    cin >> age1;
    cout << "Enter second person's age: ";
    cin >> age2;
    if (age1 > age2)
        cout << "First person is older";
    else
        cout << "Second person is older";

    return 0;
}