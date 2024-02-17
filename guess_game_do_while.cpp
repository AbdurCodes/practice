#include <iostream>
using namespace std;

main(){
    char correctChar, userGuess;
    int tryCount;
    correctChar = 'p';
    tryCount = 1;

    do
    {
        cout << "Plz enter any character from a-z: ";
        cin >> userGuess;
        if (userGuess == correctChar){
            cout << "Congrats! You guessed correctly in " << tryCount << " attempt(s)." << "\n";
            tryCount = 16;
        }
        else{
            tryCount += 1;
        }
    } while (tryCount <= 5);
    
}