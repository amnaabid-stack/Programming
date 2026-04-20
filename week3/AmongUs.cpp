#include<iostream>
using namespace std;
main()
{

 double i;
 double p;
 int chance;

 cout << "Enter imposters: ";
 cin >> i;

 cout << "Enter players: ";
 cin >> p;

chance = (100 * (i/p)) + 0.5;

cout <<  "The chance of being an imposter is: " << chance << "%";

}