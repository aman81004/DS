//Sort a string in decreasing order of value associated after removal of values smaller than X.
//string="A Z Y Z B D J K X"
//str=" Z Y Z X X"
//sort="Z Z Y X X"
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="AZYZBDJKX";
    string str;
    for(int i=0;i<s.length();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        } 
    }
    int n = str.length();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] < str[j + 1]) {  
                swap(str[j], str[j + 1]);
            }
        }
    }
    cout<<str;
}