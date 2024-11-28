#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice();
int getPlayerWager(int money);
int getPlayerDecision();
int playHouse();
void playRound(int& money);

int rollDice() {
    return (rand() % 13) + 2; 
}

int getPlayerWager(int money) {
    int wager;
    do {
        cout << "Enter your wager (Current balance: $" << money << "): ";
        cin >> wager;
        if (wager <= 0 || wager > money) {
            cout << "Invalid wager. Please enter a valid amount." << endl;
        }
    } while (wager <= 0 || wager > money);

    return wager;
}

int getPlayerDecision() {
    int choice;
    do {
        cout << "1. Hit" << endl;
        cout << "2. Stand" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice != 1 && choice != 2) {
            cout << "Invalid choice. Please enter 1 or 2." << endl;
        }
    } while (choice != 1 && choice != 2);

    return choice;
}

int playHouse() {
    int total = 0;
    while (total < 17) {
        int roll = rollDice();
        total += roll;
        if (total >= 22) {
            return total;
        }
    }
    return total;
}

void playRound(int& money) {
    int playerTotal = 0, houseTotal = 0;
    
    int wager = getPlayerWager(money);

    for (int i = 0; i < 2; ++i) {
        int roll = rollDice();
        playerTotal += roll;
    }

    houseTotal = playHouse();

    cout << "House's total: " << houseTotal << endl;

    int choice;
    while (playerTotal <= 21) {
        choice = getPlayerDecision();
        if (choice == 1) {
            int roll = rollDice();
            playerTotal += roll;
            cout << "Player's total: " << playerTotal << endl;
        } else {
            break;
        }
    }

    if (playerTotal > 21) {
        cout << "Player busts!" << endl;
        money -= wager;
    } else if (houseTotal > 21 || playerTotal > houseTotal) {
        cout << "Player wins!" << endl;
        money += wager;
    } else if (playerTotal == houseTotal) {
        cout << "Push! It's a tie." << endl;
    } else {
        cout << "Player loses!" << endl;
        money -= wager;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0))); 
    int money = 101;
    char playAgain;

    do {
        playRound(money);
        if (money <= 0) {
            cout << "Out of money! Game over." << endl;
            break;
        }
        cout << "Do you want to play another round? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thank you for playing!" << endl;

    return 0;
}
