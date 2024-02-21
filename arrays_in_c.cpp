#include <iostream>
#include <cmath> // for isnan to function
using namespace std;

main(){
    int age [5];  // array declared
    int marks [] = {23,45,66,76,44}; // array declared and initialized in one line w/o mentioning size

    for (int i=0; i<5; i++){
        age[i] = 0; // array initialized for best practice method 1
    }
    // int age [5] = {0,0,0,0,0}; // array initialized method 2
    // int age [5] = {0}; // array initialized method 3

    // populating the age array
    // for (int i=0; i<5; i++){
    //     cout << "Plz enter age " << i+1 << ": ";
    //     cin >> age[i];
    // }
    // cout << age[4];
    
    int i=0, markss, marksArray [10] = {0};
    float averageMarks, totalMarks=0;

    do {
        cout << "Plz enter marks of student " << i+1 << ": ";
        cin >> markss;
        if (markss != -1){
            marksArray[i] = markss;
            totalMarks += markss;
        }
        i++;
    } while (markss != -1 && i < 10);

    averageMarks = totalMarks / (i-1);
    averageMarks = isnan(averageMarks) ? 0 : averageMarks;

    cout << "The total marks are: " << totalMarks << "\n";
    cout << "The total students are: " << i-1 << "\n";
    cout <<  "The average marks are: " << averageMarks;
}