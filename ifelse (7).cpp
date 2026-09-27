#include <iostream>
using namespace std;
int main()
 {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 5 == 0)
        cout << "Number is divisible by 5";
    else
        cout << "Number is not divisible by 5";

    return 0;
}