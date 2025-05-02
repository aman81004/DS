#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the  first number:";
    cin>>a;
    int b;
    cout<<"Enter the  second number:";
    cin>>b;
    int c;
    cout<<"Enter the  third number:";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<"is largest";
    }
    if(b>a && b>c){
        cout<<b<<"is largest";
    }
    if(c>a && c>b){
        cout<<c<<"is largest";
    }
    return 0;
}