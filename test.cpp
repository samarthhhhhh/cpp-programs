#include <iostream>
#include <cmath>
using namespace std;

void fillArray(int*,int);
void displayArray(int*,int);

int main() {
    int size;
    cout << "What should the size of the array be?";
    cin >> size;
    int* arr = new int[size];
    fillArray(arr, size);
    displayArray(arry, size);
    delete[] arr;
    return 0;
}
void fillArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = pow(2, i+1);
    }
}
void displayArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}