#include <iostream>
using namespace std;

main(){

    int age1, age2, age3, age4, age5;
    int totalAge;
    int averageAge;

    cout << "Please enter age 1: ";
    cin >> age1;
    cout << "Please enter age 2: ";
    cin >> age2;
    cout << "Please enter age 3: ";
    cin >> age3;
    cout << "Please enter age 4: ";
    cin >> age4;
    cout << "Please enter age 5: ";
    cin >> age5;

    totalAge = age1 + age2 + age3 + age4 + age5;

    averageAge = totalAge / 5;

    cout << "The average age in the class is " << averageAge << ".";




    // int age1 = 34;
    // int age2 = 33;
    // int age3 = 23;
    // int age4 = 13;
    // int age5 = 36;
    // int age6 = 30;
    // int age7 = 24;
    // int age8 = 45;
    // int age9 = 37;
    // int age10 = 92;

    // int averageAge = (age1+age2+age3+age4+age5+age6+age7+age8+age9+age10)/10;

    // std::cout << "The average age in the class is " << averageAge;
    
}