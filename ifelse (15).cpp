#include <iostream>
using namespace std;
int main()
 {
    int attendance;
    cout << "Enter attendance percentage: ";
    cin >> attendance;
    if (attendance >= 75)
        cout << "You are eligible for the exam";
    else
        cout << "You are not eligible for the exam";

    return 0;
}