#include<iostream>
using namespace std;
int main(){
    int sp;
    cout<<"Enter the selling price:";
    cin>>sp;
    int cp;
    cout<<"Enter the cost price:";
    cin>>cp;
    if(sp>cp){
        cout<<"Profit is"<<sp-cp;
    }
    if(cp>sp){
        cout<<"Loss is"<<cp-sp;
    }
    if(cp=sp){
        cout<<"No profit no loss";
    }
    return 0;
}