//Given an array with N distinct elements, convert the given array to a form
//where all the elements are in the range from 0 to N-1.The oreder of elements is the same
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
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
    vector<int> a(n,0);
    int x=0;
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int min_index=-1;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            else{
                if(min>v[j]){
                    min=v[j];
                    min_index=j;
                }
            }
        }
        a[i]=min_index;
        v[min_index]=1;
        x++;
    }
    cout<<"Changed array is:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}