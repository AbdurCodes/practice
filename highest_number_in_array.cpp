// a program that figures out which number is the highest in a given array

#include <iostream>
#include <climits>
using namespace std;

main(){

    int nums[] = {653, 544, 143, 455, 56, 1978, 33, 234, 577, 4, 777};

    int numsSize = sizeof(nums)/sizeof(nums[0]);

    cout << "The size of array is: " << numsSize << "\n";

    int highestNum;
    for (int i=0; i<numsSize; i++){
        if (i==0){
            highestNum = nums[i];
        }
        // if(i != numsSize-1){
        if (highestNum > nums[i+1]){
            continue;
        }
        else{
            highestNum = nums[i+1];
        }
        // }
    }
    
    cout << "The highest number is: " << highestNum << "\n";

    //print the platform-specific minimum and maximum values for the int data type
    // cout << "Minimum value of an int: " << INT_MIN ;
    // cout << "\nMaximum value of an int: " << INT_MAX ;

}