#include <iostream>
using namespace std;

// int numberPower (float, int); // function declaration needed when function is called before definition
float numberPower (float number, int power) { // function definition
        // cout << number;
        float result = 1.0;

        if (power < 0) {
            power = -power;
            for (int i = 1; i <= power; i++) {
            result = result * number;
            if (i == power) {
                result = 1.0 / result;
            }
        }
        }
        else {
            for (int i = 0; i < power; i++) {
            result = result * number;
        }
        }
        return result;
    };

main(){
    // function calls
    cout << numberPower(2,3) << "\n";
    cout << numberPower(3,3) << "\n";
    cout << numberPower(5.5, 3) << "\n";
    cout << numberPower(6,0) << "\n";
    cout << numberPower(0,3) << "\n";
    cout << numberPower(2,-2) << "\n";
    cout << numberPower(2,-3) << "\n";
    cout << numberPower(2,-4) << "\n";
    cout << numberPower(2,-5) << "\n";
}