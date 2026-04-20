#include <iostream>
#include <string>

using namespace std;

// Function to calculate volume
string pyramidVolume(double length, double width, double height, string unit) {
    // Pyramid volume formula: (length * width * height) / 3
    double volume = (length * width * height) / 3.0;

    // Unit conversion logic (input is in meters)
    if (unit == "millimeters") {
        volume = volume * 1000000000; 
    } else if (unit == "centimeters") {
        volume = volume * 1000000;
    } else if (unit == "kilometers") {
        volume = volume / 1000000000;
    }

    return to_string(volume) + " cubic " + unit;
}

int main() {
    double l, w, h;
    string unit;

    cout << "Enter length, width, height (in meters): ";
    cin >> l >> w >> h;
    cout << "Enter output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;

    // Calling the function
    string result = pyramidVolume(l, w, h, unit);
    cout << result << endl;

    return 0;
}