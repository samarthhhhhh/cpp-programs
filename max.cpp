#include <iostream>
using namespace std;

int main() {
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        int num1, num2;

        cout << "Enter two integers: " << endl;
        cin >> num1 >> num2;

        if (num1 == num2) {
            cout << "The two numbers " << num1 << " and " << num2 << " are equal." << endl;
        } else if (num1 > num2) {
            cout << "The maximum number between " << num1 << " and " << num2 << " is " << num1 << "." << endl;
        } else {
            cout << "The maximum number between " << num1 << " and " << num2 << " is " << num2 << "." << endl;
        }

        cout << "Again(y/n)? " << endl;
        cin >> choice;
    }

    cout << "Goodbye!" << endl;

    return 0;
}
