#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Element to be searched:";
    cin>>target;
    bool flag=false;
    for(int i=0;i<=n;i++){
        if(target==arr[i]){
            flag=true;
        }
    }
    if(flag==true) cout<<"Element Present";
    else cout<<"Element absent";
}