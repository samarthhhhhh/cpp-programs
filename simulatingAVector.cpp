#include <iostream>
#include <string>

using namespace std;

string* addEntry(string *dynamicArray, int size, string newEntry);
string* deleteEntry(string *dynamicArray, int size, string entryToDelete);
void selectionSort(string *arr, int size, bool sortByLength);

int main() {
    int size = 5;
    string* dynamicArray = new string[size];

    cout << "Enter 5 names:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Name " << i + 1 << ": ";
        cin >> dynamicArray[i];
    }

    selectionSort(dynamicArray, size, false);
    cout << "Names sorted alphabetically:" << endl;
    for (int i = 0; i < size; i++) {
        cout << dynamicArray[i] << endl;
    }

    string newEntry;
    cout << "Enter a new name to add: ";
    cin >> newEntry;
    dynamicArray = addEntry(dynamicArray, size, newEntry);
    size++;

    selectionSort(dynamicArray, size, false);
    cout << "Names sorted alphabetically after adding a new name:" << endl;
    for (int i = 0; i < size; i++) {
        cout << dynamicArray[i] << endl;
    }

    selectionSort(dynamicArray, size, true);
    cout << "Names sorted by length:" << endl;
    for (int i = 0; i < size; i++) {
        cout << dynamicArray[i] << endl;
    }
    string entryToDelete;
    cout << "Enter a name to delete: ";
    cin >> entryToDelete;
    dynamicArray = deleteEntry(dynamicArray, size, entryToDelete);
    size--;

    selectionSort(dynamicArray, size, true);
    cout << "Names sorted by length after deleting an entry:" << endl;
    for (int i = 0; i < size; i++) {
        cout << dynamicArray[i] << endl;
    }

    return 0;
}

string* addEntry(string *dynamicArray, int size, string newEntry) {
    string *newArray = new string[size + 1];
    for (int i = 0; i < size; i++) {
        newArray[i] = dynamicArray[i];
    }
    newArray[size] = newEntry;
    return newArray;
}

string* deleteEntry(string *dynamicArray, int size, string entryToDelete) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (dynamicArray[i] == entryToDelete) {
            found = true;
            for (int j = i; j < size - 1; ++j) {
                dynamicArray[j] = dynamicArray[j + 1];
            }
            break;
        }
    }
    if (found) {
        string *newArray = new string[size - 1];
        for (int i = 0; i < size - 1; i++) {
            newArray[i] = dynamicArray[i];
        }
        return newArray;
    }
    return dynamicArray;
}

void selectionSort(string *arr, int size, bool sortByLength) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if ((sortByLength && arr[j].length() < arr[minIndex].length()) ||
                (!sortByLength && arr[j] < arr[minIndex])) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            string temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
