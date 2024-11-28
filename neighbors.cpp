#include <iostream>
using namespace std;

void findLargerThanNeighbors(int arr[][3]);

int main() {
    int array[3][3];

    cout << "Enter the elements of the " << 3 << "x" << 3 << " array:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }
    findLargerThanNeighbors(array);

    return 0;
}

void findLargerThanNeighbors(int arr[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int currentElement = arr[i][j];
            bool isLargerThanNeighbors = true;
            int startRow = (i == 0) ? 0 : (i - 1);
            int endRow = (i == 2) ? 2 : (i + 1);
            int startCol = (j == 0) ? 0 : (j - 1);
            int endCol = (j == 2) ? 2 : (j + 1);

            for (int x = startRow; x <= endRow && isLargerThanNeighbors; x++) {
                for (int y = startCol; y <= endCol; y++) {
                    if (!(x == i && y == j) && currentElement <= arr[x][y]) {
                        isLargerThanNeighbors = false;
                        break;
                    }
                }
            }
            if (isLargerThanNeighbors) {
                cout << "Element at position [" << i << "][" << j << "] is larger than all its neighbors." <<  endl;
				cout << "Value: " << currentElement << endl;
            }
        }
    }
}
