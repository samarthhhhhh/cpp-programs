#include <iostream>
#include <string>
using namespace std;

char rotate(unsigned char ch, int shift);
string encipher(string str, int n);
double letterScore(char ch);
string decipher(string str);

int main() {
    int choice;
    string encryptMessage;
    string decryptMessage;

    cout << "Welcome to Caesar Cypher. Please choose from the following options" << endl;

    do {
        cout << "1. Encrypt a message" << endl;
        cout << "2. Decode a message" << endl;
        cout << "3. End Program" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                int shift;
                cout << "Enter a message to encrypt: ";
                cin.ignore();
                getline(cin, encryptMessage);
                cout << "Enter a Caesar shift between 1 and 25: ";
                cin >> shift;
                cout << encipher(encryptMessage, shift) << endl;
                break;

            case 2:
                cout << "Enter the message you want to decode: ";
                cin.ignore();
                getline(cin, decryptMessage);
                cout << decipher(decryptMessage) << endl;
                break;

            case 3:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 3);

    return 0;
}


char rotate(unsigned char ch, int n) {

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        char base = (ch >= 'a' && ch <= 'z') ? 'a' : 'A';
        char rotatedChar = static_cast<char>((ch - base + n) % 26 + base);
        return rotatedChar;
    }
    return ch; 
}

string encipher(string str, int n) {

    string encryptedString;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        char rotatedChar = rotate(ch, n);
        encryptedString += rotatedChar;
    }
    return encryptedString;
}

double letterScore(char ch){
    if (ch == 'A' || ch == 'a') return .0684;
    if (ch == 'B' || ch == 'b') return .0139;
    if (ch == 'C' || ch == 'c') return .0146;
    if (ch == 'D' || ch == 'd') return .0456;
    if (ch == 'E' || ch == 'e') return .1267;
    if (ch == 'F' || ch == 'f') return .0234;
    if (ch == 'G' || ch == 'g') return .0180;
    if (ch == 'H' || ch == 'h') return .0701;
    if (ch == 'I' || ch == 'i') return .0640;
    if (ch == 'J' || ch == 'j') return .0033;
    if (ch == 'K' || ch == 'k') return .0093;
    if (ch == 'L' || ch == 'l') return .0450;
    if (ch == 'M' || ch == 'm') return .0305;
    if (ch == 'N' || ch == 'n') return .0631;
    if (ch == 'O' || ch == 'o') return .0852;
    if (ch == 'P' || ch == 'p') return .0136;
    if (ch == 'Q' || ch == 'q') return .0004;
    if (ch == 'R' || ch == 'r') return .0534;
    if (ch == 'S' || ch == 's') return .0659;
    if (ch == 'T' || ch == 't') return .0850;
    if (ch == 'U' || ch == 'u') return .0325;
    if (ch == 'V' || ch == 'v') return .0084;
    if (ch == 'W' || ch == 'w') return .0271;
    if (ch == 'X' || ch == 'x') return .0007;
    if (ch == 'Y' || ch == 'y') return .0315;
    if (ch == 'Z' || ch == 'z') return .0004;
    return 0.0;
}

string decipher(string str) {

    string decryptedString;
    double maxScore = 0; 
    int maxShift = 0;

    for (int i = 0; i < 26; ++i) {
        string decryptedAttemptString = encipher(str, i);
        double score = 0; 

        for (int j = 0; j < decryptedAttemptString.length(); ++j) {
            score += letterScore(decryptedAttemptString[j]);
        }
        if (score > maxScore) {
            maxScore = score;
            decryptedString = decryptedAttemptString;
            maxShift = i;
        }
    }
    return decryptedString;
}
