//Given a string consisting of lowercase.Print the character
//that is occuring most no of times
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getLine(cin,str);
    cout<<str<<endl;
    int max=0;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        int count=1;
        for(int j=i+1;j<str.length();j++){
            if(s[j]==s[i]) count++;
        }
        if(max<count) max=count;
    }
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        int count=1;
        for(int j=i+1;j<str.length();j++){
            if(s[j]==s[i]) count++;
        }
        if(count==max){
            cout<<ch<<" "<<max<<endl;
        }
    }
}