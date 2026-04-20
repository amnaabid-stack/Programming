
#include <iostream>
#include <string>

using namespace std;

// Function to convert number to text
string convertToText(int n) {
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", 
                     "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    if (n < 20) {
        return ones[n];
    } else {
        return tens[n / 10] + ones[n % 10];
    }
}

int main() {
    int num;
    cout << "Enter a number (1-99): ";
    cin >> num;

    if (num >= 1 && num <= 99) {
        cout << convertToText(num) << endl;
    } else {
        cout << "Number out of range!" << endl;
    }

    return 0;
}