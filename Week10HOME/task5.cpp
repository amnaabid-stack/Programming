#include <iostream>
using namespace std;

// Function to calculate final salary based on bonus rules
float calculateSalary(float base, int score, int experience) {
    float bonusPercentage = 0;

    // Performance bonus rules
    if (score >= 90) {
        bonusPercentage = 0.20; // 20% bonus
    } else if (score >= 75) {
        bonusPercentage = 0.10; // 10% bonus
    } else {
        bonusPercentage = 0.05; // 5% bonus
    }

    // Extra 5% bonus for 5 or more years of experience
    if (experience >= 5) {
        bonusPercentage += 0.05;
    }

    // Calculating total salary
    float totalBonus = base * bonusPercentage;
    return base + totalBonus;
}

int main() {
    float base;
    int score, experience;

    // Getting input from the user
    cout << "Enter base salary, performance score, and experience in years: " << endl;
    cin >> base >> score >> experience;

    // Calling function
    float finalSalary = calculateSalary(base, score, experience);

    // Displaying the final result
    cout << "Final Salary: " << finalSalary << endl;

    return 0;
}