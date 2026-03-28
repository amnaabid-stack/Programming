#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of resistors in the series circuit: ";
    cin >> n;

    
    double resistors[n];
    double totalResistance = 0;

    cout << "Enter the resistance values (in ohms) of the " << n << " resistors, one per line:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> resistors[i];
        
        totalResistance = totalResistance + resistors[i];
    }

    cout << "The total resistance of the series circuit is " << totalResistance << " ohms." << endl;

    return 0;
}