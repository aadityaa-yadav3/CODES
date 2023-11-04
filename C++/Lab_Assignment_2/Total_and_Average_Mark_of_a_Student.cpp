#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class student{
    protected:
         int roll_number;
    public:
       void set_number(int k){
             roll_number=k;
           
         }
       void display_number(){
         cout<<roll_number<<endl;
       }
    
};

class Test : public student{
    public:
        int scores[5];
        void readInput(){
            cin >> roll_number;
            for (int i = 0; i < 5; i++){
                cin >> scores[i];
            }
        }
};

class Result : public Test{
    public:
        void Display(){
            int totalScore = 0;
            for (int i = 0; i < 5; i++){
                totalScore += scores[i];
            }
            cout << roll_number << " " << totalScore << " " << totalScore/5 << " " << endl;
        }
};

int main() {
    int num;
    cin >> num;
    for (int i = 0; i < num; i++){
        Result temp;
        temp.readInput();
        temp.Display();
    }
    return 0;
}
