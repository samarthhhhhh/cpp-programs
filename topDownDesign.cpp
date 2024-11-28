#include <iostream>
using namespace std;

double getSales(string divisionName);
void findHighest(double northeast, double southeast, double northwest, double southwest);

int main() {
	
	double northeast = getSales("Northeast");
	double southeast = getSales("Southeast");
	double northwest = getSales("Northwest");
	double southwest = getSales("Southwest");

	findHighest(northeast, southeast, northwest, southwest);

	return 0;
}

double getSales(string divisionName) {
	double sales;
	do {
		cout << "Enter quarterly sales figure for " << divisionName << endl;
		cin >> sales;
	} while (sales < 0);

	return sales;
}

void findHighest(double northeast, double southeast, double northwest, double southwest) {
	string highestDivision;
    double highestSales;

    if (northeast >= southeast && northeast >= northwest && northeast >= southwest) {
        highestSales = northeast;
        highestDivision = "Northeast";
    } else if (southeast >= northeast && southeast >= northwest && southeast >= southwest) {
        highestSales = southeast;
        highestDivision = "Southeast";
    } else if (northwest >= northeast && northwest >= southeast && northwest >= southwest) {
        highestSales = northwest;
        highestDivision = "Northwest";
    } else {
        highestSales = southwest;
        highestDivision = "Southwest";
    }

    cout << "The division with the highest sales is " << highestDivision << " with $" << highestSales << " in sales." << endl;
}
