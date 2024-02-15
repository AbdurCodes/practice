#include <iostream>
using namespace std;

main () {
    int number;
    int digit;

    /* this little program takes a 4 digit number as input and prints all the digits one by one
from the left side */

    cout << ">>> PRINT THE DIGITS OF A NUMBER IN NORMAL ORDER <<<" << "\n";
    cout << "plz enter 4-digit number: ";
    cin >> number;
    digit = number / 1000;
    cout << "The first digit is " << digit << "\n";
    digit = number / 100;
    digit = digit % 10;
    cout << "The second digit is " << digit << "\n";
    digit = number / 10;
    digit = digit % 10;
    cout << "The third digit is " << digit << "\n";
    digit = number % 10;
    cout << "The last digit is " << digit << "\n";

/* this little program takes a 4 digit number as input and prints all the digits one by one
from the right side */

    cout << ">>> PRINT THE DIGITS OF A NUMBER IN REVERSE ORDER <<<" << "\n";
    cout << "plz enter 4-digit number: ";
    cin >> number;
    digit = number % 10;
    cout << "The last digit of the number is " << digit << "\n";
    number = number / 10;
    digit = number % 10;
    cout << "The second last digit of the number is " << digit << "\n";
    number = number / 10;
    digit = number % 10;
    cout << "The second digit of the number is " << digit << "\n";
    number = number / 10;
    digit = number % 10;
    cout << "The first digit of the number is " << digit << "\n";

}