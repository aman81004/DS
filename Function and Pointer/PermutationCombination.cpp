#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int combination(int n,int r){
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int permutation(int n,int r){
    int npr=fact(n)/fact(n-r);
    return npr;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int r;
    cout<<"Enter the value of r:";
    cin>>r;
    int nfact=fact(n);
    int rfact=fact(r);
    int nrfact=fact(n-r);
    int ncr=combination(n,r);
    cout<<ncr<<endl;
    int npr=permutation(n,r);
    cout<<npr<<endl;
}