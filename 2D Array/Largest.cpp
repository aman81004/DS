#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows:";
    cin>>n;
    int m;
    cout<<"Enter no of coloumns:";
    cin>>m;
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
        cout<<max;
    }

}