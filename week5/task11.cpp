#include <iostream>
using namespace std;

int main() {
    int choice = 0;
    float n1, n2;

    // While loop: Jab tak user 6 press nahi karta, loop chalega
    while (choice != 6) {
        
        // 1. Pehle menu dikhao
        cout << "\n--- Simple Calculator ---" << endl;
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Clear Screen\n6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        // 2. Sirf agar choice 1-4 hai, tabhi numbers maango
        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> n1;
            cout << "Enter second number: ";
            cin >> n2;
        }

        // 3. Calculation logic (if-else chain)
        if (choice == 1) {
            cout << "Result: " << n1 + n2 << endl;
        }
        else if (choice == 2) {
            cout << "Result: " << n1 - n2 << endl;
        }
        else if (choice == 3) {
            cout << "Result: " << n1 * n2 << endl;
        }
        else if (choice == 4) {
            if (n2 != 0) {
                cout << "Result: " << n1 / n2 << endl;
            } else {
                cout << "Error: Cannot divide by zero!" << endl;
            }
        }
        else if (choice == 5) {
            cout << "Screen cleared." << endl;
        }
        else if (choice == 6) {
            cout << "Exiting Calculator. Goodbye!" << endl;
        }
        else if (choice > 6 || choice < 1) {
            cout << "Invalid choice! Try again." << endl;
        }
    }

    return 0;
}