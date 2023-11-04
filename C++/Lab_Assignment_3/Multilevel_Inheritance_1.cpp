#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Vehicle{
    public:
        int maxSpeed, weight;
        void setMaxSpeed(){
            cin >> maxSpeed;
        }
        void setWeight(){
            cin >> weight;
        }
};

class Car : public Vehicle{
    public:
        int numDoors;
        void setNumDoors(){
            cin >> numDoors;
        }
        void printDetails(){
            cout << "Max speed: " << maxSpeed << endl;
            cout << "Weight: " << weight << endl;
            cout << "Number of doors: " << numDoors << endl;
        }
};

class SportsCar : public Car{
    public:
        int topSpeed;
        void setTopSpeed(){
            cin >> topSpeed;
        }
        void printDetails(){
            cout << "Max speed: " << maxSpeed << endl;
            cout << "Weight: " << weight << endl;
            cout << "Number of doors: " << numDoors << endl;
            cout << "Top speed: " << topSpeed << endl;

        }
};

int main()
{
    SportsCar tempCar;
    tempCar.setMaxSpeed();
    tempCar.setWeight();
    tempCar.setNumDoors();
    tempCar.setTopSpeed();
    tempCar.printDetails();
    return 0;
}