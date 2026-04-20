#include <iostream>
using namespace std;

// Function Prototype
void checkGreater(int num1, int num2);

int main()
{
    int num1, num2;

    cout << "Enter Player 1 power level: ";
    cin >> num1;

    cout << "Enter Player 2 power level: ";
    cin >> num2;

    // Function Call
    checkGreater(num1, num2);

    return 0;
}

// Function Definition
void checkGreater(int num1, int num2)
{
    if (num1 > num2)
    {
        cout << "Winner is Player 1 with power: " << num1 << endl;
    }
    else if (num2 > num1)
    {
        cout << "Winner is Player 2 with power: " << num2 << endl;
    }
    else
    {
        cout << "It's a TIE! Both are equally powerful." << endl;
    }
}