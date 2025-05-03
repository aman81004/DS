#include<iostream>
#include<vector>
using namespace std;

int main() {
    int m;
    cin>>m;
    vector<vector<int>> v;

    // Create triangle with m rows
    for (int i = 1; i <= m; i++) {
        vector<int> a(i);
        v.push_back(a);
    }

    // Fill Pascal's triangle
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < i; j++) {
            if (j == 0 || j == i - 1)
                v[i][j] = 1;
            else
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
        }
    }

    // Print triangle
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < i; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
