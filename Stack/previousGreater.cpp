#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// Function to find the previous greater element for each element in the array
vector<int> previousGreater(vector<int> &arr){
    stack<int> st;
    int n = arr.size();
    vector<int> ans(n);
    ans[0] = -1;
    st.push(arr[0]);
    for(int i = 1; i < n; i++){
        while(st.size() > 0 && st.top() <= arr[i]) st.pop();
        if(st.size() == 0) ans[i] = -1;
        else ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    vector<int> result = previousGreater(arr);
    
    cout << "Previous greater elements are: ";
    for(int i = 0; i < n; i++){
        cout << result[i] << " ";
    }
    
    return 0;
}