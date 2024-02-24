// this programs sorts a given array through a recursive function

#include <iostream>
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

main()
{
    // const int arraySize = 6;
    int nums[] = {5, 9, 1, 6, 3, 7, -1, -49, 33, 17, 77, 4, 4};
    int arraySize = sizeof(nums) / sizeof(nums[0]);

    // cout << nums << "\n"; // prints memory address of the first element of the array
    // cout << nums[2]; // prints 1

    // sizeof(nums) - returns the total size of the array in bytes (here 24)
    // sizeof(nums[0]) - 4 (size of an integer)

    // traditional for loop with index-based iteration
    cout << "Formatted array\n";
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        (i == 0) ? cout << "{ " << nums[i] << ", " : (i == sizeof(nums) / sizeof(nums[0]) - 1) ? cout << nums[i] << " }"
                                                                                               : cout << nums[i] << ", ";
        // (i==sizeof(nums) / sizeof(nums[0])-1) ? cout << nums[i] : cout << nums[i] << "\n";
        // cout << nums[i] << " ";
    }

    cout << "\n"; // newline only
    // cout << endl; newline plus flushing of output stream for immediate output

    // range-based for loop
    cout << "Arrays elements before sort function call" << "\n";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << "\n";


    // cout << smallestNumber << "\n";

    sortArray(nums, arraySize);

    // original array has been changed as can be seen from the below code
    cout << "Arrays elements after sort function call" << "\n";
    for (int num : nums)
    {
        cout << num << " ";
    }

    cout << "\nEnd of program" << "\n";

}