#include <iostream>
#include <string> // String handle 

using namespace std;

// Value returning function
string checkAlphabetCase(char input) {
    if (input == 'A') {
        return "You have entered Capital A";
    } else {
        return "You have entered small a";
    }
}

int main() {
    char ch;

    cout << "Enter a character (A/a): ";
    cin >> ch;

    // Function call and printing the returned string
    string result = checkAlphabetCase(ch);
    cout << result << endl;

    return 0;
}