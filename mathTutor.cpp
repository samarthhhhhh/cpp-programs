#include <iostream>
#include <cstdlib>
using namespace std;

void displayMenu();
void addition(int num1, int num2);
void subtraction(int num1, int num2);
void multiplication(int num1, int num2);

int main() {

    int choice;

    do {
        displayMenu();
        cin >> choice;

        int num1, num2;  

        switch (choice) {
            case 1:
                num1 = rand()%10;
                num2 = rand()%10;
                addition(num1, num2);
                break; 
            case 2:
                num1 = rand()%10;
                num2 = rand()%10;
                subtraction(num1, num2);
                break;
            case 3:
                num1 = rand()%10;
                num2 = rand()%10;
                multiplication(num1, num2);
                break;
            case 4:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }

    } while (choice != 4);

    return 0;
}

void displayMenu() {
    cout << "Math Tutor Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
}

void addition(int num1, int num2) {
    int userAnswer;
    int correctAnswer = num1 + num2;

    cout << "What is " << num1 << " + " << num2 << "? ";
    cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        cout << "Correct! Well done." << endl;
    } else {
        cout << "Incorrect. The correct answer is: " << correctAnswer << endl;
    }
}

void subtraction(int num1, int num2) {
    int userAnswer;
    int correctAnswer = num1 - num2;

    cout << "What is " << num1 << " - " << num2 << "? ";
    cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        cout << "Correct! Well done." << endl;
    } else {
        cout << "Incorrect. The correct answer is: " << correctAnswer << endl;
    }
}

void multiplication(int num1, int num2) {
    int userAnswer;
    int correctAnswer = num1 * num2;

    cout << "What is " << num1 << " * " << num2 << "? ";
    cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        cout << "Correct! Well done." << endl;
    } else {
        cout << "Incorrect. The correct answer is: " << correctAnswer << endl;
    }
}
