#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of lines:";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=2*i-1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp--;
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;
    }
}