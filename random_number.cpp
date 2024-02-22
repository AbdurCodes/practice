#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    int x,y,z;

    srand(time(0)); // Seed with current time
    x = rand(); // generates random number b/w 0(incl) and 32767(excl)
    cout << "Random number between 0 and 32766 is " << x << "\n"; 

    y = rand() % 6; // generates random number b/w 0(incl) and 6(excl)
    cout << "Random number between 0 and 5 is " << y << "\n";

    z = rand() % 2; // generates random number b/w 0(incl) and 2(excl)
    cout <<  "Random number between 0 and 1 is " << z << "\n";

    int min = 10;
    int max = 20;
    // generates random number b/w 10(incl) and 20(incl)
    int random_number = rand() % (max - min + 1) + min;
    cout <<  "Random number between 10 and 20 is " << random_number << "\n";
}