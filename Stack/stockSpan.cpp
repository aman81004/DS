#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// Function for calculating the stock span
vector<int> stockSpan(vector<int> &arr){    
    int n = arr.size();
    vector<int> ans(n);
    stack<int> st;
    for(int i = 0; i< n; i++){
        while(!st.empty() && arr[st.top()] <= arr[i]){
            st.pop();
        }
        if(st.size() == 0){
            ans[i] = i + 1;
        } else {
            ans[i] = i - st.top(); 
        }
        st.push(i);
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the number of days: ";
    cin >> n;
    vector<int> arr(n);
    
    cout << "Enter the stock prices: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    vector<int> result = stockSpan(arr);
    
    cout << "Stock spans are: ";
    for(int i = 0; i < n; i++){
        cout << result[i] << " ";
    }
    
    return 0;
}