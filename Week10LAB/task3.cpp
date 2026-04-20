#include <iostream>
#include <cmath> // Square root function

using namespace std;

// User-defined function
void calculateSquareRoot(double number) {
    double result = sqrt(number);
    cout << "The square root of " << number << " is: " << result << endl;
}

int main() {
    double number;

    cout << "Enter a number: ";
    cin >> number;

    // Function call
    calculateSquareRoot(number);

    return 0;
}