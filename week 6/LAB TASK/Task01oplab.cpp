#include <iostream>
using namespace std;

void displayLocations(string word)
{
    
    for (int i = 0; word[i] != '\0'; i++)
    {
        cout << word[i] << " found at position " << i << endl;
    }
}

int main()
{
    string word;

    cout << "Enter a word: ";
    cin >> word;

    
    displayLocations(word);

    return 0;
}