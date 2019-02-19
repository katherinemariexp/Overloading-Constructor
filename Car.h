#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>

using namespace std;

class Car
{
    private:
        int yearModel;
        string make;
        int speed;
        
    public: 
        Car(int y, string m)
            { 
                yearModel = y;
                make = m;
                speed = 0; 
            }
        
        //accessor    
        int getYearModel() const { return yearModel; }
        string getMake() const { return make; }
        int getSpeed() const { return speed; }
        
        //accelerate function + 5 to speed
        void accelerate(int a)
            { speed += 5; }
        //brake -5 from speed
        void brake(int b)
            { speed -= 5; }
        
};

#endif