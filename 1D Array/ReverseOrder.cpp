//WAP to copy the elements of one array into another in reverse order
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v1;
    int n;
    cout<<"Enter array size:";
    cin>>n;
    cout<<"Enter array element:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v1.push_back(q);
    }
    display(v1);
    vector<int> v2(v1.size());
    for(int i=0;i<v2.size();i++){
        v2[i]=v1.size()-1-i;
    }
    display(v2);
}