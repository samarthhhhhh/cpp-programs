#include<iostream>
#include<string>
using namespace std;

int main() {
	
	string usDollarsStr;
	double southKoreanWon, chineseYuan;

	cout << "Enter an amount in U.S. dollars: " << endl;
	cin >> usDollarsStr;

	double usDollarsDouble = stod(usDollarsStr); // Convert the string to a double
	southKoreanWon = usDollarsDouble / 0.00087;
	chineseYuan = usDollarsDouble / 0.15;

	cout << "$" << usDollarsDouble << " = " << southKoreanWon << " South Korean Won" << endl;
	cout << "$" << usDollarsDouble << " = " << chineseYuan << " Chinese Yuan" << endl;

	return 0;
}
