#include <iostream>
using namespace std;
int main() 
{
    int temp;
    cout << "Enter temperature: ";
    cin >> temp;
    if (temp > 30)
        cout << "It is hot";
    else
        cout << "It is not hot";

    return 0;
}