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
    int ans=-1;
    while(low<=high){
        mid=low+(high-low)/2;
        if(v[mid]==target) low=mid+1;
        else{
            ans=mid;
            high=mid-1;
        }        
    }
    cout<<"Missing smallest number is :"<<ans<<endl;
}