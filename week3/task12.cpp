#include<iostream>
using namespace std;
main()
{

    int n, w, h;
    int wallArea, numberOfWalls;

    cout << "Number of square meters you can paint: ";
    cin >> n;

    cout << "Width of the single wall (in meters): ";
    cin >> w;

    cout << "Height of the single wall (in meters): ";
    cin >> h;

  
    wallArea = w * h;
    numberOfWalls = n / wallArea;

    cout << "Number of walls you can paint: " << numberOfWalls << endl;

}