#include<iostream>
#include<string>
using namespace std;
void skipCharacter(string ans,string original){
    if(original.size()==0) return;
    char ch=original[0];
}
int main(){
    string s;
    getline(cin, s);
    cout<<"String is :"<<s<<endl;
    string a;
    cout<<"Enter the character to skip :";
    cin>>a;
    skipCharacter(s,a);
}