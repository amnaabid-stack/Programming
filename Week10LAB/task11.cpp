#include <iostream>
#include <string>

using namespace std;

// Function to calculate pool state and return result as a string
string calculatePoolState(double V, double P1, double P2, double H) {
    double totalWater = (P1 + P2) * H;
    
    if (totalWater <= V) {
        // Percentage calculations
        double poolPercentage = (totalWater / V) * 100;
        double pipe1Percentage = ((P1 * H) / totalWater) * 100;
        double pipe2Percentage = ((P2 * H) / totalWater) * 100;
        
        // Formatting output as per test case requirements
        return "The pool is " + to_string((int)poolPercentage) + "% full. Pipe 1: " + 
               to_string((int)pipe1Percentage) + "%. Pipe 2: " + 
               to_string((int)pipe2Percentage) + "%.";
    } else {
        // Overflow case
        double overflow = totalWater - V;
        return "For " + to_string(H) + " hours, the pool overflows with " + to_string((int)overflow) + " liters.";
    }
}

int main() {
    double V, P1, P2, H;
    
    cout << "Enter volume of the pool in liters: ";
    cin >> V;
    cout << "Enter flow rate of the first pipe per hour: ";
    cin >> P1;
    cout << "Enter flow rate of the second pipe per hour: ";
    cin >> P2;
    cout << "Enter hours that the worker is absent: ";
    cin >> H;
    
    // Calling the function
    string result = calculatePoolState(V, P1, P2, H);
    cout << result << endl;
    
    return 0;
}
