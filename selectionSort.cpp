#include <iostream>
using namespace std;

void selectionSortLargest(int[], int);

int main() {
    const int size = 5;
    int arr[size] = {64, 25, 12, 22, 11};

    cout << "Original array: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    selectionSortLargest(arr, size);

    cout << "\nSorted array: " << endl;
    for (int i = 0; i < size; ++i) {
       cout << arr[i] << " ";
    }

    return 0;
}

void selectionSortLargest(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int max_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = temp;
    }
}

