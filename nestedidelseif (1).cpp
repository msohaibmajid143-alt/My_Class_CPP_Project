#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the Number : ";
    cin >> num;
cout<<endl;
    if (num > 0) 
	{
        if (num % 2 == 0)
		 {
            cout << "Positive and even";
        } 
		else
		 {
            cout << "Positive but odd";
        }
    } else 
	{
        cout << "Not positive";
    }
}

