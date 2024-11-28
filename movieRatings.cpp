#include <iostream>
#include <string>
using namespace std;

class Movie {
    private:
        string movieName;
        string mpaaRating;
        int numRatings[5];
    public:
        Movie(string mn, string mr) {
            movieName = mn;
            mpaaRating = mr;
            for (int i = 0; i < 5; i++) {
                numRatings[i] = 0;
            }
        }
     i   void addRating(int rating) {
            if (rating <= 5 && rating >= 1) {
                numRatings[rating - 1]++;
            } else {
                cout << "Rating is invalid, it should be between 1 and 5.";
            }
        }
        double getAverage() {
            double totalCount = 0;
            double totalReviews = 0;
            double average;
            for (int i = 0; i < 5; i++) {
                totalReviews += numRatings[i] * (i+1);
                totalCount += numRatings[i];
            }
            average = totalReviews/totalCount;
            return average;
        }
        string getMovieName() {
            return movieName;
        }
        string getMpaaRating() {
            return mpaaRating;
        }
        void setMovieName(string name) {
            movieName = name;
        }
        void setMpaaRating(string rating) {
            mpaaRating = rating;
        }
};
int main() {
    Movie movie1("Home Alone", "PG");
    Movie movie2("Home Alone 2", "PG");

    movie1.addRating(5);
    movie1.addRating(4);
    movie1.addRating(4);
    movie1.addRating(5);
    movie1.addRating(3);
    movie1.addRating(2);

    movie2.addRating(5);
    movie2.addRating(4);
    movie2.addRating(3);
    movie2.addRating(2);
    movie2.addRating(1);
    movie2.addRating(2);
    movie2.addRating(3);

    cout << "Movie 1: " << movie1.getMovieName() << endl;
    cout << "Rating: " << movie1.getMpaaRating() << endl;
    cout << "Average Review: " << movie1.getAverage() << endl;

    cout << "Movie 2: " << movie2.getMovieName() << endl;
    cout << "Rating: " << movie2.getMpaaRating() << endl;
    cout << "Average Review: " << movie2.getAverage() << endl;
}