#include <iostream>
#include <string>
using namespace std;

class Car {
    private:
        int year;
        string make;
        int speed;
    public:
        Car(int y, string m) {
            year = y;
            make = m;
            speed = 0;
        }
        int getYear() {
            return year;
        }
        string getMake() {
            return make;
        }
        int getSpeed() {
            return speed;
        }
        void accelerate() {
            speed += 5;
        }
        void brake() {
            if (speed >= 5) {
                speed -= 5;
            } else {
                speed = 0;
            }
        }
};
int main() {
    Car myCar(2016, "Mazda CX9");

    cout << "My Car: " << myCar.getYear() << " " << myCar.getMake() << endl;

    for (int i = 0; i < 5; i++) {
        myCar.accelerate();
        cout << "Current speed: " << myCar.getSpeed() << endl;
    }
    for (int i = 0; i < 5; i++) {
        myCar.brake();
        cout << "Current speed: " << myCar.getSpeed() << endl;
    }

    return 0;
}
