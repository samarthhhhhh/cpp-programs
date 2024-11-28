#include <iostream>
using namespace std;

string lookupName(string targetName, string names[], string phoneNumbers[], int size);

int main() {
    string names[] = {"Michael Myers", "Ash Williams", "Jack Torrance", "Freddy Krueger"};
    string phoneNumbers[] = {"333-8000", "333-2323", "333-6150", "339-7970"};
    string targetName, targetPhone;
    char c;

    do {
        cout << "Enter a name to find the corresponding phone number." << endl;
        getline(cin, targetName);
        targetPhone = lookupName(targetName, names, phoneNumbers, 4);
        
        if (targetPhone.length() > 0)
            cout << "The number is: " << targetPhone << endl;
        else
            cout << "Name not found." << endl;

        cout << "Look up another name? (Y/n)" << endl;
        cin >> c;
        cin.ignore();

    } while (c == 'y' || c == 'Y');

    return 0;
}

string lookupName(string targetName, string names[], string phoneNumbers[], int size) {
    string targetPhone = "";
    for (int i = 0; i < size; i++) {
        if (targetName == names[i]) {
            targetPhone = phoneNumbers[i];
            return targetPhone;
        }
    }
    
    return targetPhone;
}
