#include <iostream>
using namespace std;

main(){
    int tableOf, i;

    cout << "Table of number: ";
    cin >> tableOf;

    for (i=1; i<=10; i++){
        cout << tableOf << " x " << i << " = " << tableOf*i << "\n";
    }
}