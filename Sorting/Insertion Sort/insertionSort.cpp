#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int j=i;
        while(j>0 && v[j] < v[j-1]){
            swap(v[j],v[j-1]);
            j--;
        }
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
    insertionSort(v);
    cout<<"After sort:";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}