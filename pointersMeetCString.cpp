#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char*);

int main() {
    const int size = 100; 
    char string1[size];
    cout << "Enter a string: ";
    cin.getline(string1, size);
    reverseString(string1);
    cout << "Reversed string: " << string1 << endl;

    char string2[size];
    cout << "Enter another string: ";
    cin.getline(string2, size);
    reverseString(string2);
    cout << "Reversed string: " << string2 << endl;

    return 0;
}

void reverseString(char* str) {
    int length = strlen(str);
    char* front = str;
    char* rear = str + length - 1;

    while (front < rear) {
        char temp = *front;
        *front = *rear;
        *rear = temp;
        front++;
        rear--;
    }
}
