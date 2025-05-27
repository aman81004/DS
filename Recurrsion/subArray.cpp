#include<iostream>
#include<vector>
using namespace std;
void subarrays(vector<int> s,vector<int> &v,int n,int idx){
    if(idx==n){
        for(int i=0;i<s.size();i++){
            cout<<s[i];
        }
        cout<<endl;
        return;
    }
    subarrays(s,v,n,idx+1);
    if(s.size()==0 || v[idx-1]==s[s.size()-1]){
        s.push_back(v[idx]);
        subarrays(s,v,n,idx+1);
    }
}
int main(){
    int n;
    cout<<"Enter number of elements in array:";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements in array:";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<endl;
    cout<<"Array is:";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> s;
    cout<<"Sub arrays are:";
    subarrays(s,v,n,0);
}