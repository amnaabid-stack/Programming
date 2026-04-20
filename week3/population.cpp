#include<iostream>
using namespace std;
main()
{ 
  int population;
  int n;
  int finalpopulation;
 
  cout<<"Enter current world population:";
  cin >> population;

 cout<<"Enter the monthly birth rate (number of births per month):";
 cin >> n;

 finalpopulation = population + (n * 360);


  cout << "Population in three decades will be: " << finalpopulation;

}