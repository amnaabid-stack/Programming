#include <iostream>
using namespace std;

int main() {
    double money;
    int endYear;
    int age = 18;

    cout << "Enter inherited money: "; cin >> money;
    cout << "Enter the year he has to live until: "; cin >> endYear;

    
    for (int year = 1800; year <= endYear; year++) {
        if (year % 2 == 0) {
            money = money - 12000;
        } else {
            money = money - (12000 + (50 * age));
        }
        age = age + 1;
    }

    if (money >= 0) {
        cout << "Yes! He will live a carefree life and will have " << money << " dollars left." << endl;
    } else {

        double needed = money * -1;
        cout << "He will need " << needed << " dollars to survive." << endl;
    }

    return 0;
}