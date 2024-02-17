#include <iostream>
using namespace std;

main(){
    int sumEven, sumOdd, sum, i;
    sumEven = 0;
    sumOdd = 0;
    sum = 0;


    // for loop to calculate the sum of first 10 numbers (1-10)
    // for (i=1; i<=10; i++) {
    //     // cout << i << "\n";
    //     sum = sum + i;
    // }
    // cout << "sum from FOR loop is: " << sum << "\n";


    // while loop: calculates the sum of odd numbers and even numbers
    i = 1;
    while(i<=10){
        if (((i / 2) * 2 == i)){
            sumEven += i;
        }
        else{
            sumOdd += i;
        }
        i+= 1;
    }
    cout << "Even sum from WHILE loop is: " << sumEven << "\n";
    cout << "Odd sum from WHILE loop is: " << sumOdd;
}