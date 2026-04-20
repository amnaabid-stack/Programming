#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    
    string productNames[100];
    float prices[100];
    int quantity[100];


    for (int i = 0; i < n; i++) {
        cout << "\nEnter name of product " << (i + 1) << ": ";
        cin >> productNames[i];
        
        cout << "Enter price of " << productNames[i] << ": ";
        cin >> prices[i];
        
        cout << "Enter quantity of " << productNames[i] << ": ";
        cin >> quantity[i];
    }

    
    cout << "\nProduct Inventory Report" << endl;
    cout << "--------------------------" << endl;

    for (int i = 0; i < n; i++) {
        
        float totalValue = prices[i] * quantity[i];
        
        cout << productNames[i] << ": $" << prices[i] 
             << ", " << quantity[i] << " in stock, Total value: $" 
             << totalValue << endl;
    }

    return 0;
}