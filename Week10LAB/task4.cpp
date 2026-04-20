#include <iostream>
#include <cmath> // tan() function ke 
using namespace std;

// User-defined function to calculate and display height
void calculateTreeHeight(double distance, double angleDegrees) {
    // Degree to Radian conversion
    double radians = angleDegrees * (3.14159265 / 180.0);
    
    // Formula: Height = Distance * tan(theta)
    double height = distance * tan(radians);
    
    cout << "The height of the tree is: " << height << " feet" << endl;
}

int main() {
    double distance, angle;

    cout << "Enter the distance from the base of the tree (in feet): ";
    cin >> distance;

    cout << "Enter the angle of elevation (in degrees): ";
    cin >> angle;

    // Function call
    calculateTreeHeight(distance, angle);

    return 0;
}