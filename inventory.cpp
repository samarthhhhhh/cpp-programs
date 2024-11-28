#include <iostream>
using namespace std;

class Inventory {
    private:
        int itemNumber;
        int quantity;
        double cost;
    public:
        Inventory() {
            itemNumber = 0;
            quantity = 0;
            cost = 0;
        }
        Inventory(int iN, int q, double c) {
            setItemNumber(iN);
            setQuantity(q);
            setCost(c);
        }
        int getItemNumber() {
            return itemNumber;
        }
        int getQuantity() {
            return quantity;
        }
        double getCost() {
            return cost;
        }
        void setItemNumber(int iN) {
            itemNumber = iN;
        }
        void setQuantity(int q) {
            quantity = q;
        }
        void setCost(double c) {
            cost = c;
        }
        double getTotalCost() {
            double totalCost = quantity*cost;
            return totalCost;
        }
};

int main() {
    cout << "Inventory: " << endl;

    Inventory lightbulb(1, 16, 15.99);
    cout << "Item Title: " << "Lightbulb" << endl; 
    cout << "Item Number: " << lightbulb.getItemNumber() << endl;
    cout << "Quantity: " << lightbulb.getQuantity() << endl;
    cout << "Cost of One Item: $" << lightbulb.getCost() << endl;
    cout << "Total Cost: $" << lightbulb.getTotalCost() << endl;

    Inventory tv;
    tv.setItemNumber(2);
    tv.setQuantity(1);
    tv.setCost(1599.99);
    cout << "Item Title: " << "TV" << endl; 
    cout << "Item Number: " << tv.getItemNumber() << endl;
    cout << "Quantity: " << tv.getQuantity() << endl;
    cout << "Cost of One Item: $" << tv.getCost() << endl;
    cout << "Total Cost: $" << tv.getTotalCost() << endl;
}