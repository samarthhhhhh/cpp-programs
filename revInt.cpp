#include <iostream>
using namespace std;

void reversedNumber(int);

int main() {
    int number;
    do {
        cout << "Enter a non-negative number: ";
        cin >> number;
    } while (number < 0);
    cout << "Reversed Number: ";
    reversedNumber(number);
    cout << endl;
}
void reversedNumber(int number) {
    if (number < 10) {
        cout << number;
    } else {
        cout << (number%10);
        reversedNumber(number/10);
    }
}