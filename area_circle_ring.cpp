// program to calculate the area of a circle and ring

#include <iostream>
using namespace std;

float circleArea(float radius)
{
    return 3.14159 * radius * radius;
}

float outerRadius, innerRadius, ringArea;
void askUser()
{
    cout << "Please enter outer circle radius: ";
    cin >> outerRadius;
    cout << "Please enter inner circle radius: ";
    cin >> innerRadius;
}

main()
{

    askUser();

    if (innerRadius >= outerRadius)
    {
        while (innerRadius >= outerRadius)
        {
            cout << "Sorry, inner radius cannot be greater than or equal to outer radius"
                 << "\n";
            askUser();
        }
    }
    
    ringArea = circleArea(outerRadius) - circleArea(innerRadius);
    
    cout << "The ring area is: " << ringArea;
}