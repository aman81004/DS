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
    int p=-1;
    int ans[n-k+1];
    for(int i=0;i<k;i++){
        if(v[i]<0){
            p=i;
            break;
        }
    }
    if(p==-1) v[0]=1;
    else ans[0]=v[0];
    int i=1;
    int j=k;
    while(j<n){
        if(p>=i) ans[i]=v[p];
        else{
            p=-1;
            for(int x=i;x<=j;x++){
                if(v[x]<0){
                    p=x;
                    break;
                }
            }
            if(p!=-1) ans[i]=v[p];
            else ans[i]=1;
        }
        i++;
        j++;
    }
    for(int i=0;i<n-k+1;i++){
        cout<<ans[i]<<" ";
    }
}
