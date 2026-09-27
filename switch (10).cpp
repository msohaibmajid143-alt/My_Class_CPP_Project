#include <iostream>
using namespace std;

int main()
{
    int gradePoint;

    cout << "Enter grade point (0-4): ";
    cin >> gradePoint;

    switch(gradePoint)
    {
        case 4:
            cout << "Letter Grade: A";
            break;

        case 3:
            cout << "Letter Grade: B";
            break;

        case 2:
            cout << "Letter Grade: C";
            break;

        case 1:
            cout << "Letter Grade: D";
            break;

        case 0:
            cout << "Letter Grade: F";
            break;

        default:
            cout << "Invalid grade point";
    }

    return 0;
}
