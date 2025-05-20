#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> &nums,int target){
    int low=0;
    int mid;
    int high=nums.size()-1;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) high=mid-1;
            else low=mid + 1;
        }
        return -1;
}
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

    int index = binarySearch(v, target);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}