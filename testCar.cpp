#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Car car(2018, "Honda");
    int speed;
    
    cout << "Current speed: " << car.getSpeed() << endl;
 
    for (int i = 0; i < 5; i++)
    {
        car.accelerate(speed);
        cout << "Accelerating..." << endl;
        cout << "Current speed: " << car.getSpeed() << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        car.brake(speed);
        cout << "Braking..." << endl;
        cout << "Current speed: " << car.getSpeed() << endl;
    }
}