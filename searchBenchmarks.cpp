#include <iostream>
using namespace std;

int linearSearch(int[], int, int, int&);
int binarySearch(int[], int, int, int&);
void insertionSort(int[], int);

int main() {
    const int SIZE = 20;
    int arr[SIZE] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91, 102, 123, 142, 155, 177, 189, 200, 210, 225, 238};
    int target = 155; 

    int linearComparisons = 0;
    int linearIndex = linearSearch(arr, SIZE, target, linearComparisons);
    cout << "Linear Search:" << endl;
    if (linearIndex != -1) {
        cout << "Value " << target << " found at index " << linearIndex << endl;
        cout << "Number of comparisons: " << linearComparisons << endl;
    } else {
        cout << "Value " << target << " not found in the array." << endl;
        cout << "Number of comparisons: " << linearComparisons << endl;
    }
    int binaryComparisons = 0;
    insertionSort(arr, SIZE); 
    int binaryIndex = binarySearch(arr, SIZE, target, binaryComparisons);
    cout << "Binary Search:" << endl;
    if (binaryIndex != -1) {
        cout << "Value " << target << " found at index " << binaryIndex << endl;
        cout << "Number of comparisons: " << binaryComparisons << endl;
    } else {
        cout << "Value " << target << " not found in the array." << endl;
        cout << "Number of comparisons: " << binaryComparisons << endl;
    }

    return 0;
}
int linearSearch(int arr[], int size, int target, int& comparisons) {
    for (int i = 0; i < size; i++) {
        comparisons++;
        if (arr[i] == target)
            return i; 
    }
    return -1; 
}

int binarySearch(int arr[], int size, int target, int& comparisons) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        comparisons++; 
        if (arr[mid] == target)
            return mid; 
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; 
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

