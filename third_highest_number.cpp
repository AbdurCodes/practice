// a program that reads ten numbers and figures out which number is the third highest

// write any array of numbers
// sort the array
// identify the 3rd last element in sorted array

#include <iostream>
#include <climits>
using namespace std;

void sortArray (int [], int); // func declaration or prototype
void sortArray (int arrayHere [], int size) { // func definition

    // recursive function base case
    if (size == 1) {
        return; // pointless to sort single element array
    }

    int smallestNumber;
    int smallestNumberIndex;

    //iterating all the elements of the current array of current size 
    for (int i = 0; i < size; i++)
    {
        if (i==0){
            smallestNumber = arrayHere[i]; // just to assign a value to the smallestNumber variable
        }
        if (i != size - 1)
        {
            if (smallestNumber > arrayHere[i + 1])
            {
                smallestNumber = arrayHere[i + 1];
                smallestNumberIndex = i+1;
                // swapping the values
                int temp = arrayHere[0];
                arrayHere[0] = smallestNumber;
                arrayHere[smallestNumberIndex] = temp;
            }
            else
            {
                continue;                
            }
        }
    }

    sortArray(arrayHere+1, size-1);

}

main(){

    int thirdHighestNum, secondHighestNum, highestNum;
    int nums[] = {653, 700, 544, 143, 455, 56, 978, 33, 234, 577, 4, 777};

    int numsSize = sizeof(nums)/sizeof(nums[0]);

    cout << "The size of array is: " << numsSize << "\n";

    sortArray(nums, numsSize);
    
    cout << "Arrays elements after sort function call" << "\n";
    for (int num : nums)
    {
        cout << num << " ";
    }

    highestNum = 0;
    secondHighestNum = 0;
    thirdHighestNum = 0;
    for (int i=0; i<numsSize; i++){
        if (i==numsSize-1){
            highestNum = nums[numsSize-1];
        }
        if (i==numsSize-2){
            secondHighestNum = nums[numsSize-2];
        }
        if (i==numsSize-3){
            thirdHighestNum = nums[numsSize-3];
        }
    }

    cout << "\nThe highest number is: " << highestNum << "\n";
    cout << "The 2nd highest number is: " << secondHighestNum << "\n";
    cout << "The 3rd highest number is: " << thirdHighestNum << "\n";
   
}