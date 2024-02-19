#include <iostream>
using namespace std;

int numberPower (int number, int power) {
        int result = 1;
        for (int i = 0; i < power; i++) {
            result = result * number;
        }
        return result;
    };

main(){
    cout << numberPower(2,3) << "\n";
    cout << numberPower(3,3) << "\n";
    cout << numberPower(5,3) << "\n";
}