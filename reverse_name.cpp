// this liitle program reverses a given name and changes the original name also in the go, can be confirmed by checking the value of the name at the end of the program.

#include <iostream>
#include <cstring>

using namespace std;

void reverseName (char [], int);

void reverseName (char nameArray [], int size) {
    for (int i=0; i<size; i++){
        if(nameArray[i]=='\0' or i==size/2){
            break;
        }
        char temp = nameArray[i];
        nameArray[i] = nameArray[size-(i+1)];
        nameArray[size-(i+1)] = temp;
    }
    cout << "The reversed name is: " << nameArray;
}

int main(){
    const int MAX_NAME_SIZE  = 100;
    char name [MAX_NAME_SIZE] = {0}; // this will get rid of all the garbage values
    
    // char name [MAX_NAME_SIZE] = "abdur";
    cout << "The array declared and initialized is: " << name << "\n";

    cout << "Plz enter name to reverse it: ";
    // to read the entire name entered by the user use getline
    // cin only read the first word upto whitespace

    cin >> name;

    cout << "The name entered by user is: " << name << "\n";

    int sizeofArray = strlen(name);

    reverseName(name, sizeofArray);

    cout << "\nThe name after the function call is: " << name << "\n";

    return 0;

}