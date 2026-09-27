#include <iostream>
using namespace std;

int main() {
    int salary;
    cout << "Enter salary: ";
    cin >> salary;

    if (salary < 30000)
        cout << "Low salary";
    else if (salary <= 60000)
        cout << "Medium salary";
    else if (salary > 60000)
        cout << "High salary";

    return 0;
}