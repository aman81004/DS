//Given an array arr[] containing n integer  the task is to find an integer(k) such that after replacing each and every index of the array by |ai-k| where i belongs to [1,n],results in a sorted array.If no such integer exists that satisfies the above condition then return -1.
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
float max(float a, float b){
    if(a>=b) return a;
    else return b;
}
float min(float a, float b){
    if(a<b) return a;
    else return b;
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Array is:";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    float kmin=(float)(INT_MIN);
    float kmax=(float)(INT_MAX);
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(v[i]>=v[i+1]){
            kmin=max(kmin,(v[i]+v[i+1])/2.0);
        }
        else{
            kmax=min(kmax,(v[i]+v[i+1])/2.0);
        }
        if(kmin>kmax){
            flag =false;
            break;
        }
    }
    if(flag==false) cout<<-1;
    else cout<<"Range of k is: ["<<kmin<<","<<kmax<<"]";
    return 0;
}