#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    while (temp > 0) {
        sum = sum + (temp % 10); 
        temp = temp / 10;        
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}