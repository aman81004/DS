#include<iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=1;i<=n;i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<max<<endl;
    int secMax=INT_MIN;
    for(int i=0;i<=n;i++){
        if(secMax<arr[i] && arr[i]!=max) secMax=arr[i];
    }
    cout<<secMax<<endl;
}