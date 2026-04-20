C++
#include <iostream>
#include <windows.h> 

using namespace std;

int main() 
{
    cout << "Execution started..." << endl;

    // Halts the execution for 200 milliseconds
    Sleep(200); 

    cout << "Execution resumed after 200 milliseconds." << endl;

    return 0;
}