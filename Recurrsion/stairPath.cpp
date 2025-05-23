#include<iostream>
using namespace std;
int stair(int n){ 
    if(n==1) return 1;
    if(n==2) return 2;
    int a = stair(n-1);
    int b = stair(n-2);
    return a+b;
}
int main(){
    int n;
    cout<<"Enter number of stairs:";
    cin>>n;
    cout<<"Choices of climbing stairs:"<<stair(n)<<endl;
}