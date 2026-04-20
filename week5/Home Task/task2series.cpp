#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter the length of the Fibonacci series: ";
    cin >> length;

    int first = 0, second = 1, next;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < length; i++) {
        if (i <= 1) {
            next = i; 
        } else {
            next = first + second; 
            first = second;       
            second = next;
        }
        
        cout << next;
        
        if (i < length - 1) {
            cout << ", ";
        }
    }

    return 0;
}