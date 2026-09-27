#include <iostream>
using namespace std;

int main() {
    string color;
    char button;

    cout << "Enter signal color (red/yellow/green): ";
    cin >> color;

    if (color == "red") {

        cout << "Pedestrian button pressed? (Y/N): ";
        cin >> button;

        if (button == 'Y' || button == 'y') {
            cout << "Stop and allow pedestrians to cross.";
        }
        else {
            cout << "Stop.";
        }

    }
    else if (color == "yellow") {

        cout << "Pedestrian button pressed? (Y/N): ";
        cin >> button;

        if (button == 'Y' || button == 'y') {
            cout << "Wait and allow pedestrians to cross.";
        }
        else {
            cout << "Slow down and prepare to stop.";
        }

    }
    else if (color == "green") {

        cout << "Pedestrian button pressed? (Y/N): ";
        cin >> button;

        if (button == 'Y' || button == 'y') {
            cout << "Proceed carefully and watch for pedestrians.";
        }
        else {
            cout << "Go.";
        }

    }
    else {
        cout << "Invalid signal color.";
    }

    return 0;
}

