#include <iostream>
using namespace std;

int main() {
    int num, digit, frequency = 0;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the digit to check: ";
    cin >> digit;

    int temp = num; 
    while (temp > 0) {
        if (temp % 10 == digit) {
            frequency++;
        }
        temp = temp / 10; 
    }

    cout << "Frequency: " << frequency << endl;
    return 0;
}