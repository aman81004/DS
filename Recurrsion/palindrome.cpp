#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool palindrome(string s,int i,int j){
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else return palindrome(s,i+1,j-1);
}
int main(){
    string str;
    cin >>str;
    cout<<palindrome(str,0,str.length()-1);
}