#include <iostream>
using namespace std;

int main() {

    int rows = 7; 

    for (int i = 0; i < rows; i++) {

        int number = 1; 

        for (int j = 0; j < rows - i; j++) {
            cout << "   ";
        }

        for (int j = 0; j <= i; j++) {
            cout << "      " << number; 
            number = number * (i - j) / (j + 1); 
        }

        cout << endl;
    }

    return 0;
}
