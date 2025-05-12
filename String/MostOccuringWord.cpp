//Given a sentence , return the number of words that occur the most.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getLine(cin,str);
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        cin>>push_back(temp);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
    int maxCount=1;
    int count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else count =1;
        maxCount=max(maxCount,count);
    }
    count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else count =1;
        if(count==maxCount){
            cout<<v[i]<<" "<<maxCount;
        }
    }
}