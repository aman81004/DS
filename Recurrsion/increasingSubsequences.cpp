#include<iostream>
#include<vector>
#include<string>
using namespace std;
void subsequence(vector<int> &v,int n,int idx,vector<int>ans,int k){
    if(idx==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(ans.size()+(n-idx) < k)return;
    subsequence(v,n,idx+1,ans,k);
    ans.push_back(v[idx]);
    subsequence(v,n,idx+1,ans,k);
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
    int k;
    cout<<"Enter length of subsequence:";
    cin>>k;
    vector<int> s;
    subsequence(v,n,0,s,k);
}