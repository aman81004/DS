#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==1 ||n==2) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n;
    cout<<"Enter the nth number in fibonacci sequence:";
    cin>>n;
    cout<<fibonacci(n);
}