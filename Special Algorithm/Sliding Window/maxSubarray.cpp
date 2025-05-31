#include<iostream>
#include<vector>
#include<climits>
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
    int k;
    cout<<"Enter size of sub array:";
    cin>>k;
    // int maxIdx=-1;
    // for(int i=0;i<=n-k;i++){
    //     int sum=0;
    //     for(int j=i;j<i+k;j++){
    //         sum+=v[j];
    //     }
    //     if(maxSum<sum){
    //         maxSum=sum;
    //         maxIdx=i;
    //     }
    // }
    int maxSum=INT_MIN;
    int prevSum=0;
    int maxIdx=-1;
    for(int i=0;i<k;i++){
        prevSum+=v[i];
    }
    maxSum=prevSum;
    //sliding
    int i=1;
    int j=k;
    while(j<n){
        int currSum=prevSum+v[j]-v[i-1];
        if(maxSum<currSum){
            maxSum=currSum;
            maxIdx=i;
        }
        prevSum=currSum;
        i++;
        j++;
    }
    cout<<"Max sum of sub array:"<<maxSum<<endl;
    cout<<"Max index:"<<maxIdx;
}
