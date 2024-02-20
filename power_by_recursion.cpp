#include <iostream>
using namespace std;

// this follows 2**3 = 2 * 2**2 and so on
int numPower (int num, int power) {
    if (power == 1) {
        return num;
    }
    else {
        return num * numPower (num, power-1);
    }
}

main(){
    cout << numPower(2,3) << "\n";
    cout << numPower(2,4) << "\n";
    cout << numPower(2,8) << "\n";
    cout << numPower(5,3) << "\n";
}