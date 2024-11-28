#include <iostream>
using namespace std;

int calculateMedian(int*, int);
void selectionSort(int*, int);

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *arr = new int[size];

    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int median = calculateMedian(arr, size);
    cout << "The median of the array is: " << median << endl;

    return 0;
}

void selectionSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
int calculateMedian(int* arr, int size) {
    selectionSort(arr, size);
    double median;
    if (size % 2 == 0) {
        median = (*(arr + size / 2 - 1) + *(arr + size / 2)) / 2.0;
    } else {
        median = *(arr + size / 2);
    }

    return median;
}