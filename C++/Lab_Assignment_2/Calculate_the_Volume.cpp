#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Cuboid{
    public:
        int length;
        int breadth;
        int height;
        void display(){
            cout << length << " " << breadth << " " << height << endl;
        }
};

class CuboidVol : public Cuboid{
    public:
        void readInput(){
            cin >> length >> breadth >> height;
            Cuboid::display();
        }
        void display(){
            cout << length*breadth*height << endl;
        }
};

int main() {
    int num;
    cin >> num;
    for (int i = 0; i < num; i++){
        CuboidVol temp;
        temp.readInput();
        temp.display();
    }
    return 0;
}
