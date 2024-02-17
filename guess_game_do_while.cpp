#include <iostream>
using namespace std;

main(){
    char correctChar, userGuess;
    int tryCount, maxTries;
    correctChar = 'p';
    tryCount = 1;
    maxTries = 5;


    do
    {
        cout << "Plz enter any character from a-z: ";
        cin >> userGuess;
        if (userGuess == correctChar){
            cout << "Congrats! You guessed correctly in " << tryCount << " attempt(s)." << "\n";
            
        }
        else{
            tryCount += 1;
        }
    } while (tryCount <= maxTries && userGuess!='p');
    
}