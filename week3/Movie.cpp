#include<iostream>
using namespace std;
 main()
{

char movieName[100];
double adultPrice;
double childPrice;
int adultSold;
int childSold;
double donationPercent;
double totalAmount;
double donationAmount;
double remainingAmount;

cout << "Enter movie name: ";
cin.get(movieName, 100);

cout << "Enter adult ticket Price: ";
cin >> adultPrice;

cout << "Enter child ticket Price: ";
cin >> childPrice;

cout << "Enter number of  adult tickets sold: ";
cin >> adultSold;

cout << "Enter number of child ticket sold: ";
cin >> childSold;

cout << "Enter donation Percentage: ";
cin >> donationPercent;

totalAmount = (adultPrice  * adultSold) + (childPrice * childSold);

donationAmount = (totalAmount * donationPercent) / 100;

remainingAmount = totalAmount - donationAmount;


cout << "\n================================" << endl;
    cout << "        MOVIE SALES REPORT       " << endl;
    cout << "================================" << endl;
    cout << "Movie Name:      " << movieName << endl;
    cout << "Total Generated: $" << totalAmount << endl;
    cout << "Donation (" << donationPercent << "%):  $" << donationAmount        <<endl;  
    cout << "Net Profit:      $" << remainingAmount << endl;
    cout << "================================" << endl;

}

 


