// First negative integer in each window of size k
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> firstNegativeInEachWindowK(vector<int> &arr , int k){
    vector<int> result ;
    queue<int> q ;
    int n = arr.size() ;

    for( int i = 0 ; i < k ; i++ ){
        if( arr[i] < 0) q.push(i) ;
    }

    int i = 0 ;
    while ( i <= n - k){
        while( !q.empty() && q.front() < i ) q.pop() ;
        if( q.size() == 0 || q.front() >= i + k ) result.push_back(0) ;
        else result.push_back(arr[q.front()]) ; 
        i++;
    }

    return result ;
}

int main(){
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28} ;
    int k = 3 ;
    vector<int> result = firstNegativeInEachWindowK(arr , k) ;

    cout << "First negative integers in each window of size " << k << " are: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0 ;
}