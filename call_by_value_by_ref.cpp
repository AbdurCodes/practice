#include <iostream>
using namespace std;

int square (int number) {
    return number * number;
}

void squareR (int& i) {
    i = i * i;
}

// i is a pointer to a variable int
void squareR2 (int *number){
    *number = *number * *number; // *i means whatever i points to i.e. the value
}

main(){

    // // function call by value
    // int i = 4;
    // cout << "Square of " << i << " is " << square(i) << "\n";
    // // value of i remains the same
    // cout << i;

    // // function call by reference : method 1
    // int i = 3;
    // cout << i << "\n";
    // squareR(i);
    // // value of i changes
    // cout << i << "\n";

    // function call by reference : method 2
    int i = 4;
    cout << i << "\n";
    // passing the memory address of the variable i
    squareR2(&i);
    // value of i changes
    cout << i << "\n";

}