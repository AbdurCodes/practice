#include <iostream>
using namespace std;

main(){
    long number, factorial;
    factorial = 1;
    number = 0;

    cout << "Enter number to find its factorial: ";
    cin >> number;

    // cout << number;
    
    while (number >= 1)
    {   
        factorial = factorial * number;
        number = number - 1;
    }
    
    // cout << number;

    // cout << "The factorial of the number " << number << " is " << factorial;   
    cout << "The factorial of the number is " << factorial;   
}