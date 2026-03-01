#include<iostream>
using namespace std;
main()

{
    float imposters, players;
    float chance;

   
    cout << "Enter imposters: ";
    cin >> imposters;

    cout << "Enter players: ";
    cin >> players;

    chance = (imposters / players) * 100;

    cout << "Chance = " << chance << "%" << endl;
}