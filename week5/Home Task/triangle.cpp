#include <iostream>
using namespace std;

int main()
{

    int i, j, rows;
    
    // User se input ky liyee
    cout << "Input number of rows : ";
    cin >> rows;
    
    
    for(i = 1; i <= rows; i++)
    {
        
        for(j = 1; j <= i; j++)
        {
            cout << "*";
        }
        
        
        cout << "\n";
    }
    
    
}