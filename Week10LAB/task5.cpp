#include <iostream>
#include <cmath> // sqrt() aur pow() 

using namespace std;

// User-defined function to solve quadratic equation
void solveQuadratic(double a, double b, double c) {
    double discriminant = (b * b) - (4 * a * c);
    
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two real and distinct solutions: " << root1 << " and " << root2 << endl;
    } 
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "One real solution (repeated root): " << root << endl;
    } 
    else {
        cout << "No real solutions (complex roots)." << endl;
    }
}

int main() {
    double a, b, c;

    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    // Function call
    solveQuadratic(a, b, c);

    return 0;
}