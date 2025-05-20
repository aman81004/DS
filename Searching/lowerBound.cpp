#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of elements in array:";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<endl;

    cout << "Array is :";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    int target;
    cout<<"Targeted element is:";
    cin>>target;

    int low=0;
    int mid;
    int high=v.size()-1;
    bool flag=false;
    while(low<=high){
        mid=low+(high-low)/2;
        if(v[mid]==target) {
            flag=true;
            cout<<v[mid-1];
            break;
        }
        else if(v[mid]<target) low=mid+1;
        else if(v[mid]>target) high=mid-1;
    }
    if(flag==false) cout<<"Lower bound is:"<<v[high]<<endl;
}