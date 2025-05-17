#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& v) {
    int i = 0, j = 0, k = 0;
    int n1 = a.size(), n2 = b.size();
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            v[k++] = a[i++];
        } 
        else { 
            v[k++] = b[j++];
        }
    }
    while (i < n1) {
        v[k++] = a[i++];
    }
    while (j < n2) {
        v[k++] = b[j++];
    }
}
void mergeSort(vector<int> &v){
    int n=v.size();
    int n1=n/2;
    int n2=n-n/2;
    if(n==1) return;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergeSort(a);
    mergeSort(b);
    merge(a,b,v);
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Before sort:";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    cout<<"After sort:";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}