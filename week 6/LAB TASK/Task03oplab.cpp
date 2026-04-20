#include <iostream>
using namespace std;


void nextLetter(string word)
{
    for (int i = 0; word[i] != '\0'; i++)
    {
        
        if (word[i] == 'z')
        {
            word[i] = 'a';
        }
        
        else
        {
            word[i] = word[i] + 1;
        }
    }
    
    cout << "Output: " << word << endl;
}

int main()
{
    string word;

    cout << "Input: ";
    cin >> word;

    nextLetter(word);

    return 0;
}