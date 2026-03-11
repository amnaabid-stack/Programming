#include <iostream>
using namespace std;

main()
 {
    int holidays;
    int workingDays;
    int totalMinutes;
    int diff;
    int hours;
    int minutes;

    cin >> holidays;

    workingDays = 365 - holidays;
    totalMinutes = (workingDays * 63) + (holidays * 127);

    if (totalMinutes > 30000) {
        diff = totalMinutes - 30000;
        hours = diff / 60;
        minutes = diff % 60;
        cout << "Tom will run away" ;
        cout << hours << " " << minutes ;
    } 
    else
     {
        diff = 30000 - totalMinutes;
        hours = diff / 60;
        minutes = diff % 60;
        cout << "Tom sleeps well" ;
        cout << hours << " " << minutes ;
    }

}