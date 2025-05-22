#include<iostream>
using namespace std;
void sums(int sum,int n){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sums(sum+n,n-1);
}
int main(){
    int n;
    cin>>n;
    sums(0,n);
}