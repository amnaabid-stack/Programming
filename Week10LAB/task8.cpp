#include <iostream>
#include <string>

using namespace std;

// Function to check if the number is Oddish or Evenish
string OddishOrEvenish(int number) {
    int sum = 0;
    int temp = number;

    // Har digit ka sum nikalna
    while (temp > 0) {
        sum += (temp % 10);
        temp /= 10;
    }

    // Check karna ke sum odd hai ya even
    if (sum % 2 != 0) {
        return "Oddish";
    } else {
        return "Evenish";
    }
}

int main() {
    int num;
    cout << "Enter a five-digit number: ";
    cin >> num;

    // Function call
    string result = OddishOrEvenish(num);
    cout << result << endl;

    return 0;
}