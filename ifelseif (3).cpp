#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50)
        cout << "Pass";
    else if (marks < 50)
        cout << "Fail";

    return 0;
}