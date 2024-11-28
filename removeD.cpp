#include <iostream>
using namespace std;

int removeDuplicates(int[], int, int[]);
void display(int[], int);

int main() {
    const int inputArraySize = 10;
    int inputArray[inputArraySize] = {50, 60, 70, 70, 72, 80, 85, 85, 90, 100};
    int outputArray[inputArraySize];
    int outputArraySize = removeDuplicates(inputArray, inputArraySize, outputArray);

    cout << "Input Array:" << endl;
    display(inputArray, inputArraySize);

    cout << "Output Array:" << endl;
    display(outputArray, outputArraySize);

    return 0;
}

int removeDuplicates(int inputArray[], int inputArraySize, int outputArray[]) {
    int outputArraySize = 1; 
    outputArray[0] = inputArray[0];

    for (int i = 1; i < inputArraySize; i++) {
        if (inputArray[i] != inputArray[i - 1]) {
            outputArray[outputArraySize] = inputArray[i];
            outputArraySize++;
        }
    }
    return outputArraySize;
}
void display(int A[], int size){
    for(int i=0; i<size; i++){
        cout<< A[i] <<  "\t";
    }
    cout<<endl;
}