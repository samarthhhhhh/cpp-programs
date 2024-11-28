#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	char choice = 'y';

	while (choice == 'y' || choice == 'Y') {
        
        int num;

        cout << "Enter an integer: " << endl;
        cin >> num;

        if (num > 0) {
            cout << "The number " << num << " is positive and its absolute value is " << abs(num) << "." << endl;
        } else if (num == 0) {
            cout << "The number " << num << " is zero and its absolute value is " << abs(num) << "." << endl;
        } else {
            cout << "The number " << num << " is negative and its absolute value is " << abs(num) << "." << endl;
        }

        cout << "Again(y/n)? " << endl;
        cin >> choice;
    }

    cout << "Adios!" << endl;

	return 0;

}
