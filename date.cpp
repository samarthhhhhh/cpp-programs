#include <iostream>
#include <string>
using namespace std;

class Date {
    private:
        int month;
        int day;
        int year;

    public:
        Date(int m, int d, int y) {
            month = m;
            day = d;
            year = y;
        }
        void printDate1() {
            cout << month << "/" << day << "/" << year % 100 << endl;
        }
        void printDate2() {
            string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
            cout << months[month - 1] << " " << day << ", " << year << endl;
        }
        void printDate3() const {
            string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
            cout << day << " " << months[month - 1] << " " << year << endl;
        }
};
int main() {
    Date myDate(1, 1, 2010);
    cout << "Date Format 1: ";
    myDate.printDate1();
    cout << "Date Format 2: ";
    myDate.printDate2();
    cout << "Date Format 3: ";
    myDate.printDate3();

    return 0;
}
