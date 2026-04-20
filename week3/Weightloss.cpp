#include<iostream>
using namespace std;
main()
{

 string name;
 float kgs;
 int days;

 cout << "Enter Name: ";
 cin >> name;

 cout << "Enter weight to lose: ";
 cin >>  kgs;

days = kgs * 15;

cout << "days required for " << name << " are: " << days;

}



