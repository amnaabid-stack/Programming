#include<iostream>
using namespace std;
main()
{ 
  float voltage;
  float current;
  float power;
  
  cout <<"Enter voltage:";
  cin>>voltage;

  cout<<"Enter current:";
  cin>>current;

  power = voltage * current;
  cout <<"The power is "<<power<<" watts";

}

  