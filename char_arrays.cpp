#include <iostream>
using namespace std;

main(){
    // initialzing array of integers (2 methods)
    int age [5] = {21,22,33,21,34};
    // int age [] = {21,22,33,21,34};

    // initializing character arrays
    // for storing fixed-length character sequences that don't need string operations
    char name [100] = {'a','b','d','u','r'}; // Size is 5, no null terminator

    // the size of array that is initialized as a string must be one char more than the number of chars declared in the array, that one char will be null character (\0) which is placed by the c compiler to mark the end of the string 

    // char name [100] = "abdur"; // Size is 6 (5 characters + null terminator
    // char name [] = "abdur";


    // char myName [100];
    // cout << "Plz enter your name: ";
    // cin >> myName;
    // cout << "Your name is " << myName;


    // string lastName = "Rehman";
    // cout << lastName;


    // comparing two integer arrays
    const int intArraySize = 5;
    int array1 [intArraySize] = {2,3,4,5,6}, array2 [intArraySize] = {2,3,4,5,6};
    // 1st condition: the size of both the arrays must be the same
    int flag = 1; // flag for equal arrays
    for (int i=0; i<intArraySize; i++) {
        if (array1[i] != array2[i]) {
            flag = 0;
            break;
        }
    }
    (flag == 1) ? cout << "Both the int arrays are equal" << "\n" : cout << "The int arrays are NOT equal" << "\n";

    // comparing two char arrays
    const int charArraySize = 6;
    char charArray1 [charArraySize] = {'a','b','d','u','s'};  //charArraySize is 5 here
    // char charArray2 [charArraySize] = {'a','b','d','u','r'}; //charArraySize is 5 here
    char charArray2 [charArraySize] = "abdur"; //charArraySize is 6 here
    for (int i=0; i<charArraySize; i++) {
        if (charArray1[i] != charArray2[i]) {
            flag = 0;
            break;
        }
    }
    (flag == 1) ? cout << "Both the char arrays are equal" << "\n" : cout << "The char arrays are NOT equal" << "\n";
}