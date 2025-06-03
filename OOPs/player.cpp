#include<iostream>
using namespace std;
class player{
    private:
    string name;
    int health;
    int score;

    public:
    // void showName(){
    //     cout<<"Name is :"<<name;
    // }

    // void showHealth(){
    //     cout <<"Health is:"<<health;
    // }

    // void showScore(){
    //     cout <<"Score is:"<<score;
    // }

    //setter
    void setName(string n){
        name = n;
    }
    void setHealth(int h){
        health = h;
    }
    void setScore(int s){
        score = s;
    }

    //getter
    string getName(){
        return name;
    }
    int getHealth(){
        return health;
    }
    int getScore(){
        return score;
    }
};
int main(){
    player p1;
    p1.setName("Aman");
    p1.setHealth(80);
    p1.setScore(1000);
    cout<<p1.getName()<<endl;
    cout<<p1.getHealth()<<endl;
    cout<<p1.getScore()<<endl;
}