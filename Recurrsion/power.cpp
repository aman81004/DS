#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
    else if(b%2==0){
        return power(a,b/2)*power(a,b/2);
    }
    else if(b%2!=0){
        return power(a,b/2)*power(a,b/2)*a;
    }
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<power(a,b);
}