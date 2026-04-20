#include <iostream>
#include <cmath> // Required for the floor function
#include <string>
using namespace std;

// Function to calculate project status
string projectTimeCalculation(int neededHours, int days, int workers) {
    // 10% of days are for training, so 90% days are available for work
    double availableDays = days * 0.90;
    
    // Each worker works 8 hours regular + 2 hours overtime = 10 hours per day
    // Using floor to round down the hours as per instructions
    double totalHours = floor(availableDays * workers * 10);
    
    // Check if the calculated hours are enough
    if (totalHours >= neededHours) {
        int hoursLeft = totalHours - neededHours;
        return "Yes!" + to_string(hoursLeft) + " hours left.";
    } else {
        int hoursNeeded = neededHours - totalHours;
        return "Not enough time!" + to_string(hoursNeeded) + " hours needed.";
    }
}

int main() {
    int neededHours, days, workers;

    // Getting input from the user
    cout << "Enter needed hours: ";
    cin >> neededHours;
    cout << "Enter number of days of firm: ";
    cin >> days;
    cout << "Enter number of workers: ";
    cin >> workers;

    // Calling the function and printing the result
    string result = projectTimeCalculation(neededHours, days, workers);
    cout << result << endl;

    return 0;
}