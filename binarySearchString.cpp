#include <iostream>
using namespace std;

int BSearch(string strings[], int n, string key) {
    int mid, lbound = 0, ubound = n - 1;
    bool found = false;

    while (!found && lbound <= ubound) {
        mid = (lbound + ubound) / 2;
        if (key < strings[mid])
            ubound = mid - 1;
        else if (key > strings[mid])
            lbound = mid + 1;
        else
            found = true;
    }

    if (found)
        return mid;
    else
        return -1;
}

int main() {
    int n = 5;
    string strings[] = {"apple", "orange", "banana", "grape", "blueberry"};
    string key = "banana";

    int index = BSearch(strings, n, key);
    if (index == -1) {
        cout << "Element was not found";
    } else {
        cout << "Element was found at index " << index << endl;
    }

    return 0;
}
