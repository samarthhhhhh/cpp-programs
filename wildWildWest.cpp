#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shoot(bool& targetAlive, double accuracy);
int findBestShooter(bool aaronAlive, bool charlieAlive);
int startDuel(bool aaronAlive, bool bobAlive, bool charlieAlive);
void simulateDuelStrategy();
void simulateDuelStrategyWithAaronMissingFirstShot();

int main() {

    srand(static_cast<unsigned int>(time(0)));
    int userChoice;

    cout << "Welcome to the Wild Wild West" << endl;
    cout << "Choose a simulation: " << endl;
    cout << "1. Strategy of shooting at the best shooter alive " << endl;
    cout << "2. Strategy of shooting at the best shooter alive, but Aaron intentionally misses on the first shot " << endl;
    cin >> userChoice;

    switch (userChoice) {
        case 1: 
            simulateDuelStrategy();
            break;
        case 2:
            simulateDuelStrategyWithAaronMissingFirstShot();
            break;
        default:
            break;
    }

    return 0;
}

void shoot(bool& targetAlive, double accuracy) {
    double randomNumber = static_cast<double>(rand()) / RAND_MAX;
    if (randomNumber < accuracy) {
        targetAlive = false;
    }
}

int findBestShooter(bool aaronAlive, bool bobAlive, bool charlieAlive) {
    if (aaronAlive) 
        return 0;
    if (bobAlive) 
        return 1;
    if (charlieAlive) 
        return 2;
    return -1;
}

int startDuel(bool aaronAlive, bool bobAlive, bool charlieAlive) {
    while (true) {
        int shooter = findBestShooter(aaronAlive, bobAlive, charlieAlive);
        if (shooter == -1) {
            break; 
        }
        if (shooter == 0) {
            shoot(bobAlive, static_cast<double>(1) / 2);
        } else if (shooter == 1) {
            shoot(charlieAlive, static_cast<double>(1));
        } else if (shooter == 2) {
            shoot(aaronAlive, static_cast<double>(1) / 3);
        }
        int remaining = (aaronAlive ? 1 : 0) + (bobAlive ? 1 : 0) + (charlieAlive ? 1 : 0);
        if (remaining == 1) {
            if (aaronAlive) 
                return 0;
            if (bobAlive) 
                return 1;
            if (charlieAlive) 
                return 2;
        }
    }
    return -1;
}

void simulateDuelStrategy() {
    int aaronWins = 0, bobWins = 0, charlieWins = 0;
    const int simulations = 100;

    for (int i = 0; i < simulations; ++i) {
        int winner = startDuel(true, true, true);
        if (winner == 0) {
            aaronWins++;
        } else if (winner == 1) {
            bobWins++;
        } else if (winner == 2) {
            charlieWins++;
        }
    }

    cout << "Using the strategy of shooting at the best shooter alive:" << endl;
    cout << "Aaron win %: " << static_cast<double>(aaronWins) / simulations << endl;
    cout << "Bob win %: " << static_cast<double>(bobWins) / simulations << endl;
    cout << "Charlie win %: " << static_cast<double>(charlieWins) / simulations << endl;
}

void simulateDuelStrategyWithAaronMissingFirstShot() {
    int aaronWins = 0, bobWins = 0, charlieWins = 0;
    const int simulations = 1000;

    for (int i = 0; i < simulations; ++i) {
        int winner = startDuel(false, true, true);
        if (winner == 0) {
            aaronWins++;
        } else if (winner == 1) {
            bobWins++;
        } else if (winner == 2) {
            charlieWins++;
        }
    }

    cout << "Using the strategy of shooting at the best shooter alive, but Aaron intentionally misses on the first shot:" << endl;
    cout << "Aaron win %: " << static_cast<double>(aaronWins) / simulations << endl;
    cout << "Bob win %: " << static_cast<double>(bobWins) / simulations << endl;
    cout << "Charlie win %: " << static_cast<double>(charlieWins) / simulations << endl;
}