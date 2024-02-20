#include <iostream>
using namespace std;

int factorial (int num) {
    if (num == 1 || num == 0){
        return 1;
    }
    else{
        return num * factorial(num - 1);
    }
}

main(){
    cout << factorial(0) << "\n";
    cout << factorial(1) << "\n";
    cout << factorial(3) << "\n";
    cout << factorial(4) << "\n";
    cout << factorial(5) << "\n";
    cout << factorial(33) << "\n"; // max limit of momeory
    cout << factorial(34) << "\n"; //  returns 0
}