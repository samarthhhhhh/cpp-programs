/* During the past decade ocean levels have been rising faster than in the past, an average of
approximately 3.1 millimeters per year. Write a program that computes how much ocean
levels are expected to rise during the next 20 years if they continue rising at this rate. Display
the answer in a nice format in both centimeters and inches.
Remember, use constant whenever possible. */

#include <iostream>
using namespace std;

int main() {

    float expectedChangeInOceanLevels;
    float centimeters;
    float inches;

    float averageChangeInOceanLevels = 3.1;

    expectedChangeInOceanLevels = averageChangeInOceanLevels * 20;

    centimeters = expectedChangeInOceanLevels / 10;
    inches = expectedChangeInOceanLevels / 25.4;

    cout << "The expected rise in ocean levels during the next 20 years is " << inches << " inches or " << centimeters << " centimeters" << endl;

    return 0;
}