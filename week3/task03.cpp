
#include<iostream>
using namespace std;
 main()

{
    int twoPointers, threePointers, totalPoints;

   
    cout << "Enter the amount of 2-pointers scored: ";
    cin >> twoPointers;

    cout << "Enter the amount of 3-pointers scored: ";
    cin >> threePointers;

   
    totalPoints = (twoPointers * 2) + (threePointers * 3);

    cout << "Final points for the team: " << totalPoints << endl;

}