#include <iostream>
using namespace std;

main(){
    int i, summed=0, squared [10] = {0}, nums [10] = {1,2,3,4,5,6,7,8,9,10};

    for (i=0; i<10; i++){
        nums[i] = nums[i] * nums[i]; 
        squared[i] = nums[i];
    }

    cout << "The squared numbers are:\n";

    for (i=0; i<10; i++){
        cout << squared[i] << "\n";
        summed += squared[i];
    }

    cout << "The sum of the squared numbers is: " << summed;
}