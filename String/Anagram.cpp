#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1;
    getLine(cin,str1);
    cout<<str1<<endl;
    string str2;
    getLine(cin,str2);
    cout<<str2<<endl;;
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    cout<<str1<<endl;
    cout<<str2<endl;
    if(str1==str2) cout<<true;
    else cout<<false;
}