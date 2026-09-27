#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 10 == 0)
        cout << "The number is divisible by 10";
    else
        cout << "The number is not divisible by 10";

    return 0;
}