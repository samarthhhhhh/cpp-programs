/*Kathryn bought 600 shares of stock at a price of $21.77 per share. A year later she sold then for
just $16.44 per share. Write a program that calculates and displays the following:
• The total amount paid for the stock.
• The total amount received from selling the stock.
• The total amount of money she lost.
• All numbers should be declared constant whenever possible with an appropriate name.
Example output: The total amount paid for the stock is ...put your answer.*/

#include<iostream>
using namespace std;

int main() {
    double amountPaidForStock, amountReceivedFromSelling, totalLost;

    const double purchasePricePerShare = 21.77;
    const double sellingPricePerShare = 16.44;
    const int shares = 600;

    amountPaidForStock = shares * purchasePricePerShare;
    amountReceivedFromSelling = shares * sellingPricePerShare;

    totalLost = amountPaidForStock - amountReceivedFromSelling;

    cout << "The total amount paid for the stock is $" << amountPaidForStock << endl;
    cout << "The total amount received from selling the stock is $" << amountReceivedFromSelling << endl;
    cout << "The total amount of money she lost is $" << totalLost << endl;

    return 0;
}




