#include <iostream>
using namespace std;

int main() 
{
    char input[100];
    
    cout << "Enter a string: ";
    cin.getline(input, 100); 

    cout << "String with vowels removed: ";

    
    for (int i = 0; input[i] != '\0'; i++) 
    {
        char ch = input[i];

        
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) 
        {
            cout << ch;
        }
    }

    cout << endl;
    return 0;
}