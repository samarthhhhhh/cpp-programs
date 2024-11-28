#include <iostream>
using namespace std;

void getJudgeData(double &score);
double findLowest(double score1, double score2, double score3, double score4, double score5);
double findHighest(double score1, double score2, double score3, double score4, double score5);
double calcScore(double score1, double score2, double score3, double score4, double score5);

int main() {

	double score1, score2, score3, score4, score5;

    cout << "Enter scores for each judge: " << endl;
    getJudgeData(score1);
    getJudgeData(score2);
    getJudgeData(score3);
    getJudgeData(score4);
    getJudgeData(score5);

    double finalScore = calcScore(score1, score2, score3, score4, score5);

    cout << "Contestant's final score: " << finalScore << endl;

    return 0;
}

void getJudgeData(double &score) {
	
	cout << "Enter judge's score: ";
	do {
		cin >> score;
		if (score < 0 || score > 10) 
			cout << "Invalid input. Enter a score between 0 and 10: ";

	} while (score < 0 || score > 10);

}

double findLowest(double score1, double score2, double score3, double score4, double score5) {

    double lowest = score1;

    if (score2 < lowest) lowest = score2;
    if (score3 < lowest) lowest = score3;
    if (score4 < lowest) lowest = score4;
    if (score5 < lowest) lowest = score5;

    return lowest;
}

double findHighest(double score1, double score2, double score3, double score4, double score5) {

    double highest = score1;

    if (score2 > highest) highest = score2;
    if (score3 > highest) highest = score3;
    if (score4 > highest) highest = score4;
    if (score5 > highest) highest = score5;

    return highest;
}

double calcScore(double score1, double score2, double score3, double score4, double score5) {

	double lowest = findLowest(score1, score2, score3, score4, score5);
    double highest = findHighest(score1, score2, score3, score4, score5);

    double sum = score1 + score2 + score3 + score4 + score5;

    return (sum - (lowest + highest))/3.0;

}

