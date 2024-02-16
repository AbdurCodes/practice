#include <iostream>
using namespace std;

main(){
    int AmirAge, AmmaraAge;

    // though implicitly, the following values are 0 but it is better to be explicit
    AmirAge = 0;
    AmmaraAge = 0;

    cout << "Amir enter your age plz: ";
    cin >> AmirAge;
    cout << "Ammara enter your age plz: ";
    cin >> AmmaraAge;

    if (AmirAge > AmmaraAge) {
        cout << "Amir is older than Ammara";
    }
    else {
        cout << "Ammara is older than Amir";
    }
}