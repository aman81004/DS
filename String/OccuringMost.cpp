//Given a string consisting of lowercase.Print the character
//that is occuring most no of times
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string str;
    getline(cin, str); 
    cout << "Input: " << str << endl;
    vector<int> freq(26, 0);
    for (char ch : str) {
        freq[ch - 'a']++;
    }
    int maxFreq = 0;
    char resultChar = ' ';
    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            resultChar = 'a' + i;
        }
    }
    cout << "Character occurring most: " << resultChar << " (" << maxFreq << " times)" << endl;
    return 0;
}
