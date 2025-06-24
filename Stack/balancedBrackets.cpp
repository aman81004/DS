#include<iostream>
#include<stack>
using namespace std;

// Function to check if the brackets are balanced
bool bracketsBalanced(string str){
    stack<char> s;
    if(str.length() % 2 !=0) return false;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '[') {
            s.push(str[i]);
        } else {
            if(s.empty()) return false;
            char top = s.top();
            s.pop();
            if((str[i] == ')' && top != '(') || 
               (str[i] == '}' && top != '{') || 
               (str[i] == ']' && top != '[')) {
                return false; 
            }
        }
    }
    return s.empty(); 
}

int main() {
    string str;
    cout << "Enter a string with brackets: ";
    cin >> str;

    if (bracketsBalanced(str)) {
        cout << "The brackets are balanced." << endl;
    } else {
        cout << "The brackets are not balanced." << endl;
    }

    return 0;
}