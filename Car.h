#ifndef CAR_H
#define CAR_H
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
        
        void setYearModel(int y) { yearModel =  y; }
        void setMake(string m) { make = m; }
        void setSpeed(int s) { speed = s; }
        
        int getYearModel() const { return yearModel; }
        string getMake() const { return make; }
        int getSpeed() const { return speed; }
        
        void accelerate(int a)
            { speed += 5; }

        void brake(int b)
            { speed -= 5; }
};

#endif