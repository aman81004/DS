//Given an array of marks of students ,if the marks of any student is less than 35 print its roll no.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of students:";
    cin>>n;
    int marks[n];
    cout<<"Enter the marks:";
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];
    } 
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35)  cout<<i<<" ";
    }
}