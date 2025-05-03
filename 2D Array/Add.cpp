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
    vector<vector<int>> arr1(n, vector<int>(m));
    vector<vector<int>> arr2(n, vector<int>(m));
    vector<vector<int>> res(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            res[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<res[i][j]<<" ";
        }
    }
}