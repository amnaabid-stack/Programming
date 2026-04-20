#include <iostream>
using namespace std;

// Function to calculate updated balance based on interest rules
float calculateBalance(float balance, int years) {
    float interestRate = 0;

    // Interest based on balance range
    if (balance < 10000) {
        interestRate = 0.05; // 5% interest
    } else if (balance <= 50000) {
        interestRate = 0.07; // 7% interest
    } else {
        interestRate = 0.10; // 10% interest
    }

    // Extra 2% interest if years are 3 or more
    if (years >= 3) {
        interestRate += 0.02;
    }

    // Calculating updated balance
    float interestAmount = balance * interestRate;
    return balance + interestAmount;
}

int main() {
    float balance;
    int years;

    // Getting input from the user
    cout << "Enter Balance and years: " << endl;
    cin >> balance >> years;

    // Calling function
    float updatedBalance = calculateBalance(balance, years);

    // Displaying the final result
    cout << "Updated Balance: " << updatedBalance << endl;

    return 0;
}