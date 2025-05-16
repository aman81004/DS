#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>&v){
    int n = v.size();
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(v[minIndex]>v[j]) minIndex=j;
        }
        if(minIndex!=i) swap(v[minIndex],v[i]);
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Before sort:";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    selectionSort(v);
    cout<<"After sort:";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}