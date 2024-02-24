#include <iostream>
using namespace std;

void add2toArrayElement (int [], int); // func declaration
// this func takes array and adds two to all the elements of the array
void add2toArrayElement (int arrayHere [], int size) { // func definition
    for (int i=0; i<size ; i++) {
        arrayHere[i] = arrayHere[i] + 2;
    }
}

main(){
    const int arraySize = 5;

    int numbers [arraySize] = {23,45,66,76,44}; // array declared and initialized in one line w/o mentioning size

    cout << "The original array is: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }

    cout << "\n";
    
    add2toArrayElement(numbers, arraySize);
    
    cout << "The modified array is: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }

}
  
  