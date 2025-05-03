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
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
           sum+=arr[i][j];
        }
        cout<<sum;
    }

}