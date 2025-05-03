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
    vector<vector<int>> arr1(m, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           arr1[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}