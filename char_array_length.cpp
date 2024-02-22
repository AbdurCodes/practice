#include <iostream>
using namespace std;

main(){
    const int arraySize = 100;
    // char myArray [arraySize];

    // int arrayLength = 0;

    // for (int i=0; i<arraySize; i++){
    //     cout << "Enter an element or press 0 to stop entering: ";
    //     cin >> myArray[i];
    //     if (myArray[i] == '0'){
    //         break;
    //     }
    //     arrayLength += 1;
    // }

    // cout << "The array's length is: " << arrayLength;



    char myName [arraySize] = "abdur Rehman";
    int arrayLength = 0;
    for (int i=0; i<arraySize; i++){
        if (myName[i] == '\0'){
            break;
        }
        arrayLength += 1;
    }
    cout << "The array's length is: " << arrayLength;


}


    



