#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
    cout<<ch<<endl;
    int acsii=(int)ch;
    if((acsii>=97 && acsii<=122) || (acsii>=65 && acsii<=90)){
        cout<<"The character is alphabet";
    }
    else{
        cout<<"The character is not an alphabet";
    }
    return 0;
}