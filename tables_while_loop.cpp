#include <iostream>
using namespace std;

main(){
    int tableOf, i;

    cout << "Table of number: ";
    cin >> tableOf;

    i = 1;
    while (i<=10) {
        cout << tableOf << " x " << i << " = " << tableOf*i << "\n";
        i++;
    }
}