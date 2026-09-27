#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter First side of triangle: ";
    cin >> a ;
	cout<<endl;
	cout<< "Enter Second side of triangle: ";
	cin>> b ;
	cout<<endl;
	cout<<"Enter Third side of triangle: ";
	cin>>c;
	cout<<endl;
    if (a + b > c && a + c > b && b + c > a) {

        if (a * a + b * b == c * c ||
            a * a + c * c == b * b ||
            b * b + c * c == a * a) {

            cout << "Triangle is valid and right-angled.";
        }
        else {
            cout << "Triangle is valid but not right-angled.";
        }

    }
    else {
        cout << "Triangle is not valid.";
    }

    return 0;
}
