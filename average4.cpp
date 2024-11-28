#include<iostream>
using namespace std;

int main() {

	int grades[4];
	int sum = 0;
	double average;

	for (int i = 0; i < 4; i++) {

		cout << "Enter grade " << i + 1 << ": ";
		cin >> grades[i];

		if (grades[i] < 0 || grades[i] > 100) {
			cout << "A grade cannot be less than 0 or greater than 100. " << endl;
			cout << "Enter again: ";
			cin >> grades[i];
		}
		
		sum += grades[i]; 

	}

	average = static_cast<double>(sum) / 4;

	cout << "Your grades were: " << grades[0] << " " << grades[1] << " " << grades[2] << " " << grades[3] << endl; 
	cout << "Your average grade is " << average << endl;
	
	return 0;
}
