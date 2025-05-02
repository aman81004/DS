#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"Number is divisible by 5 or 3";
    }
    else{
        cout<<"Number is not divisible by 5 or 3";
    }
    return 0;
}