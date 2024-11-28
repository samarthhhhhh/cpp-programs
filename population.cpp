#include <iostream>
using namespace std;

void displayTable(double startingPopulation, double dailyIncreasePercentage, int days);

int main() {
    double startingPopulation, days, dailyIncreasePercentage;

    do {
        cout << "Enter the starting number of organisms: ";
        cin >> startingPopulation;
    } while (startingPopulation < 0);

    do {
        cout << "Enter the average daily population increase (as a percentage): ";
        cin >> dailyIncreasePercentage;
    } while (dailyIncreasePercentage < 0);

    do {
        cout << "Enter the number of days they will multiply: ";
        cin >> days;
    } while (days < 1);

    displayTable(startingPopulation, dailyIncreasePercentage, days);

    return 0;
}

void displayTable(double startingPopulation, double dailyIncreasePercentage, int days) {

    cout << "Day\tPopulation" << endl;

     for (int day = 1; day <= days; ++day) {
        cout << day << "\t" << startingPopulation << endl;
        startingPopulation += startingPopulation * (dailyIncreasePercentage / 100.0);
    }
}
