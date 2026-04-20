#include<iostream>
using namespace std;

int main()
{
    int salary = 10000;
    int laptopPrice = 10000;
    int advanceMonths = 6;

    int totalAdvance = salary * advanceMonths;
    
    if (totalAdvance >= laptopPrice)
     {
        cout << "Yes, Ali can buy the laptop." ;
    }
    else
     {
        
        int monthsRequired = laptopPrice / salary;
        cout << "Months required to buy laptop: " << monthsRequired << endl;
    }
    
    
}