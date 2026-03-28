#include <iostream>
using namespace std;


bool check(string word, char letter)
{
    bool isFound = false;
    
    
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == letter)
        {
            isFound = true;
            break; 
        }
    }
    return isFound;
}

int main()
{
    string word;
    char letter;

    cout << "Enter a Word: ";
    cin >> word;

    cout << "Enter the character you want to find: ";
    cin >> letter;

    if (check(word, letter))
    {
        cout << letter << " is found in " << word << endl;
    }
    else
    {
        cout << letter << " is not found in " << word << endl;
    }

    return 0;
}