#include<iostream>
using namespace std;
main()
{
 string name;
 float matric;
 float intermediate;
 float Ecat;
 float aggregate;
 cout<<"Enter name";
 cin>>name;

 cout<<"Enter matric";
 cin>>matric;
 float matricPercentage;
 matric = matric * 100 /1100;

 cout<<"Enter intermediate";
 cin>>intermediate;
 float intermediatepercentage;
 intermediate = intermediate * 100 / 550;

 cout<<"Enter Ecat";
 cin>>Ecat;
 float Ecatpercentage;
 Ecat = Ecat * 100 / 400;

 aggregate = (matric * 0.100) + (intermediate * 0.40) + (Ecat * 0.50);
 cout << "aggregate score is:" << aggregate;
}