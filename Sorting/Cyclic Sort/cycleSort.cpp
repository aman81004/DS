#include <iostream>
#include <vector>
using namespace std;

void cycleSort(vector<int> &v){
    int n = v.size();
    int i = 0;
    while(i<n){
        int correctIdx=v[i]-1;
        if(i==correctIdx) i++;
        else swap(v[i],v[correctIdx]);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> v(n);

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Before sort: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cycleSort(v);

    cout << "After sort: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
