#include <iostream>
using namespace std;

// arrays in functions are called by reference
// this little program demonstrates that passing an array to a function what the function does to the array changes the array in the calling program

void myFunc (int[], int);
void myFunc (int myarray [], int arraySize){
        for (int i=0; i<arraySize; i++){
            myarray[i] = i+2;
        }
    }

main(){
    const int arraySize = 7;

    int numsArray [arraySize];

    myFunc(numsArray, arraySize);

    // we can see the values of the arrays's elements are changed
    for (int num : numsArray){
        cout << num << " ";
    }


    

    
}