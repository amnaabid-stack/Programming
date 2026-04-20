#include<iostream>
using namespace std;
main()
{

float size;
float cost;
float area;
float cp;
float ca;

cout << "Enter size of the fertilizer bag in pounds: ";
cin >> size;

cout << "Enter cost of the bag: ";
cin >> cost;

cout << "Enter the area in square feet that can be covered by the bag: ";
cin >> area;

cp = cost / size;
ca = cost / area;

cout <<"cost of fertilizer per pound: $" << cp << endl;
cout <<"cost of fertilizing per square foot: $" << ca;

}