#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Car car(2018, "Honda");
    int speed, count, numOfCalls = 5;
    
    cout << "Current speed: " << car.getSpeed() << endl;
 
    
    for (count = 0; count < numOfCalls; count ++)
    {
        car.accelerate(speed);
        cout << "Accelerating..." << endl;
        cout << "Current speed: " << car.getSpeed() << endl;
    }

    for (count = 0; count < numOfCalls; count++)
    {
        car.brake(speed);
        cout << "Braking..." << endl;
        cout << "Current speed: " << car.getSpeed() << endl;
    }
}