#include <iostream>
#include <algorithm> 

using namespace std;

// Function to find minimum
double findMinimum(double n1, double n2) {
    return min(n1, n2);
}

int main() {
    double number1, number2;

    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    // Function call
    double result = findMinimum(number1, number2);

    cout << "The minimum of " << number1 << " and " << number2 << " is: " << result << endl;

    return 0;
}