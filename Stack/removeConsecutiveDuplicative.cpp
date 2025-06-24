#include<iostream>
#include<stack>
#include<string>
#include<algorithm> 
using namespace std;

// Functon to remove consecutive duplicative elements from a stack
string removeConsecutiveDuplicative(string &s){
    stack<char> st;
    st.push(s[0]);
    for(int i = 0; i < s.length(); i++){
        if(s[i] != st.top()) st.push(s[i]);
    }
    s = ""; // Clear the original string
    while(st.size() > 0){
        s += st.top(); 
        st.pop();
    }
    reverse(s.begin(), s.end());
    return s; 
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    removeConsecutiveDuplicative(str);

    cout << "String after removing consecutive duplicates: " << str << endl;

    return 0;
}