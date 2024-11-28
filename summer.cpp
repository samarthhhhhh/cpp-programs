#include <iostream>
using namespace std;

int main() {
    
    int month;

    cout << "Enter a month: ";
    cin >> month;

    switch (month) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 9:
        case 10:
        case 11:
        case 12:
            cout << "Not summer" << endl;
            break;
        case 6:
            cout << "June" << endl;
            break;
        case 7:
            cout << "July" << endl;
            break;
        case 8:
            cout << "August" << endl;
            break;
        default:
            cout << "Your input is out of range" << endl;
    }

    return 0;
}
