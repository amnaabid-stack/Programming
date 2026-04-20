#include <iostream>
#include <string>

using namespace std;

// Value returning function to calculate future time
string timeTravel(int hours, int minutes) {
    // 15 minute add karna
    minutes += 15;
    
    // Agar minute 60 sy zyda
    if (minutes >= 60) {
        hours += 1;
        minutes -= 60;
    }
    
    // Agar ghanta 24 ho jaye toh reset karein (24-hour format)
    if (hours >= 24) {
        hours = 0;
    }
    
    // String format mein convert karke return karna
    return to_string(hours) + ":" + to_string(minutes);
}

int main() {
    int h, m;
    
    cout << "Enter current hours: ";
    cin >> h;
    cout << "Enter current minutes: ";
    cin >> m;
    
    // Function call
    string futureTime = timeTravel(h, m);
    cout << "Future time: " << futureTime << endl;
    
    return 0;
}