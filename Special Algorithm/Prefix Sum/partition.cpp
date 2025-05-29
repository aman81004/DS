#include<iostream>
#include<vector>
using namespace std;
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
    for(int i=1;i<n;i++){
        v[i]+=v[i-1];
    }
    int idx=-1;
    for(int i=1;i<n;i++){
        if(2*v[i]==v[n-1]){
            idx=i;
            break;
        }
    }
    if(idx!=-1) cout<<"Yes it can be partitioned after"<<idx;
    else cout<<" cannot be partitioned";
}
