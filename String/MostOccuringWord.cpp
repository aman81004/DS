//Given a sentence , return the number of words that occur the most.
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    getline(cin, str);  

    stringstream ss(str);
    string temp;
    vector<string> v;

    
    while (ss >> temp) {
        v.push_back(temp);  
    }

   
    cout << "Words in input:\n";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

   
    sort(v.begin(), v.end());

    int maxCount = 1, count = 1;
    string mostFrequent = v[0];

   
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = v[i];
        }
    }

   
    cout << "\nMost frequent word: " << mostFrequent << " (" << maxCount << " times)" << endl;

    return 0;
}
