#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n%2==0){
        cout<<"%d is even";
    }
    else{
        cout<<"%d is odd";
    }
    return 0;
}