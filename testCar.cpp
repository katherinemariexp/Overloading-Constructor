#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Car honda(2018, "Civic");
    int speed;
    
    cout << "Current speed: " << honda.getSpeed() << endl;
 
    for (int i = 0; i < 5; i++)
    {
        honda.accelerate(speed);
        cout << "Accelerating..." << endl;
        cout << "Current speed: " << honda.getSpeed() << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        honda.brake(speed);
        cout << "Braking..." << endl;
        cout << "Current speed: " << honda.getSpeed() << endl;
    }
}