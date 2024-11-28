#include <iostream>
using namespace std;

double calculateAverage(int[], int);
double calculateMedian(int[], int);
int calculateMode(int[], int);

int main() {
    int numStudents;
    cout << "Enter the number of students surveyed: ";
    cin >> numStudents;

    int* moviesCount = new int[numStudents];

    cout << "Enter the number of movies each student has seen:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << i + 1 << ": ";
        cin >> moviesCount[i];
    }

    double average = calculateAverage(moviesCount, numStudents);
    double median = calculateMedian(moviesCount, numStudents);
    int mode = calculateMode(moviesCount, numStudents);

    cout << "Average: " << average << endl;
    cout << "Median: " << median << endl;
    cout << "Mode: " << mode << endl;

    return 0;
}

double calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}


double calculateMedian(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    if (size % 2 == 0) {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        return arr[size / 2];
    }
}

int calculateMode(int arr[], int size) {
    int mode = arr[0];
    int maxFrequency = 0;
    for (int i = 0; i < size; ++i) {
        int frequency = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j])
                frequency++;
        }
        if (frequency > maxFrequency) {
            maxFrequency = frequency;
            mode = arr[i];
        }
    }
    return mode;
}