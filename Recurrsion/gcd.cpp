#include<iostream>
#include<vector>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    else return(b%a,a);
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<gcd(a,b);
}