#include <iostream>
using namespace std;

void swap(string&,string&);
int partition(string[], int, int);
void quicksort(string[], int, int);

int main() {
    int n;
    cout << "Enter the number of words: ";
    cin >> n;
    string words[n];
    cout << "Enter the words:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    quicksort(words, 0, n - 1);
    cout << "Sorted words:" << endl;
    for (int i = 0; i < n; i++) {
        cout << words[i] << " ";
    }
    cout << endl;
    return 0;
}
void swap(string& a, string& b) {
    string temp = a;
    a = b;
    b = temp;
}
int partition(string arr[], int low, int high) {
    string pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) { 
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quicksort(string arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}
