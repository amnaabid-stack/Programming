#include<iostream>
using namespace std;
main()
{

    double vegPricePerKg;
    double fruitPricePerKg;
    int totalVegKg;
    int totalFruitKg;
    double totalCoins;
    double totalRupees;

    cout << "Enter vegetable price per kg (in coins): ";
    cin >> vegPricePerKg;

    cout << "Enter fruit price per kg (in coins): ";
    cin >> fruitPricePerKg;

    cout << "Enter total kilograms of fruits: ";
    cin >> totalFruitKg;

totalCoins = (vegPricePerKg * totalVegKg) + (fruitPricePerKg * totalFruitKg);

totalRupees = totalCoins / 1.94;

cout << "Total earnings in Rupees (Rps): " << totalRupees << endl;


}


