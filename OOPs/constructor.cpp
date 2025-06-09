#include<iostream>
using namespace std;
class Bike{
    public:
    int speed;
    int gear;
    Bike(int s, int g){
        speed=s;
    }
    Bike(int s, int g, int a){ // Overloaded constructor
        speed=s;
        gear=g;
    }
    void display(){
        cout << "Speed: " << speed << " km/h, Gear: " << gear << endl;
    }
}; 
int main(){
    Bike myBike(60, 4);
    myBike.display();
    return 0;
}
