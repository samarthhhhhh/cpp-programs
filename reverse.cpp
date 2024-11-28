#include <iostream>
using namespace std;

int main() {
    char input[100]; 

    cout << "Enter an integer: ";
    cin >> input;

    bool isNegative = false;
    if (input[0] == '-') {
        isNegative = true;
        for (int i = 0; input[i] != '\0'; i++) {
            input[i] = input[i + 1];
        }
    }

    bool isNumeric = true;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] < '0' || input[i] > '9') {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric) {
        int length = 0;
        while (input[length] != '\0') {
            length++;
        }

        for (int i = 0; i < length / 2; i++) { // Correct variable name "len" to "length"
            char temp = input[i];
            input[i] = input[length - i - 1]; // Correct variable name "len" to "length"
            input[length - i - 1] = temp;
        }

        if (isNegative) {
            cout << "Reversed number: -" << input << endl;
        } else {
            cout << "Reversed number: " << input << endl;
        }
    } else {
        cout << "Invalid input. Not a number." << endl;
    }

    return 0;
}
