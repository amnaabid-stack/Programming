
#include <iostream>
#include <iomanip> // Decimal fix 
using namespace std;

// Simple function
float calculateFinalPrice(char type, float price) {
    float tax = 0;

    if (type == 'M') tax = price * 0.06;
    else if (type == 'E') tax = price * 0.08;
    else if (type == 'S') tax = price * 0.10;
    else if (type == 'V') tax = price * 0.12;
    else if (type == 'T') tax = price * 0.15;

    return price + tax;
}

int main() {
    char code;
    float price;

    cout << "Enter Vehicle Type Code: ";
    cin >> code;
    cout << "Enter Price: ";
    cin >> price;

    float total = calculateFinalPrice(code, price);


    cout << "The final price is $" << fixed << setprecision(2) << total << endl;

    return 0;
}