#include <iostream>
using namespace std;

int modeOfDataset(int *arr, int size);

int main() {
    const int size = 30;
    int responses[size];

    cout << "Enter the number of pie slices eaten by each person:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Person " << (i + 1) << ": ";
        cin >> responses[i];
    }

    
    int mode = modeOfDataset(responses, size);
    cout << "The mode of the number of pie slices eaten by most people is: " << mode << endl;

    return 0;
}

int modeOfDataset(int *arr, int size) {
    int maxCount = 0;
    int mode = 0;

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; ++j) {
            if (*(arr + j) == *(arr + i))
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            mode = *(arr + i);
        }
    }
    return mode;
}
