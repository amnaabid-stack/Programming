#include <iostream>
#include <cmath> // 
using namespace std;

// User-defined function
void calculatePower(double base, double exponent) {
    // pow() function ka result double mein store karna behtar hai
    double result = pow(base, exponent);
    
    cout << base << " raised to the power " << exponent << " is: " << result << endl;
}

int main() {
    double base, exponent;

    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    calculatePower(base, exponent);

    return 0;
}