#include <iostream>
using namespace std;

void guessNumber(int, int);

int main() {
    int lbound = 1;  
    int ubound = 50;

    cout << "Think of a number between " << lbound << " and " << ubound << endl;
    cout << "I will now guess that number. Respond with y or Y if it is true, and n or N if it is false." << endl; 

    guessNumber(lbound, ubound);

    return 0;
}

void guessNumber(int lbound, int ubound) {
    char response;

    while (lbound <= ubound) {
        int guess = (lbound + ubound) / 2;
        cout << "Is your number higher than " << guess << "? (y/n): ";
        cin >> response;

        if (response == 'y' || response == 'Y') {
            lbound = guess + 1;
        } else if (response == 'n' || response == 'N') {
            ubound = guess - 1;
        } else {
            cout << "Invalid input. Please enter 'y' or 'n'.\n";
        }
    }
    
    cout << "Your number is " << lbound << ".\n";
}
