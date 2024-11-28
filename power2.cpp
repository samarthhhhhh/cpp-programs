#include <iostream>
using namespace std; 

int main() {
    int arraySize = 6;
    int nums[arraySize];

    int num = 1;
    for (int i = 0; i < arraySize; i++) {
        nums[i] = num;
        num *= 2;
    }

    for (int i = 0; i < arraySize; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}