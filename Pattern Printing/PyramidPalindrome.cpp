//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of lines:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int q=i-1;q>=1;q--){
            cout<<q;
        }
        cout<<endl;
    }
}