#include <iostream>
using namespace std;

// Function to chk symmetric
bool IsSymmetrical(int number) {
    int originalNumber = number;
    int reversedNumber = 0;
    
    // Reverse karne ka logic
    int digit;
    
    // Pehla digit nikalna
    digit = number % 10;
    reversedNumber = reversedNumber * 10 + digit;
    number = number / 10;
    
    // Dusra digit nikalna
    digit = number % 10;
    reversedNumber = reversedNumber * 10 + digit;
    number = number / 10;
    
    // Teesra digit nikalna
    digit = number % 10;
    reversedNumber = reversedNumber * 10 + digit;
    
    // Check karna ke original number aur reverse same hain
    return (originalNumber == reversedNumber);
}

int main() {
    int num;
    cout << "Enter a three-digit number: ";
    cin >> num;
    
    // Function call
    if (IsSymmetrical(num)) {
        cout << "The number is symmetrical." << endl;
    } else {
        cout << "The number is not symmetrical." << endl;
    }
    
    return 0;
}