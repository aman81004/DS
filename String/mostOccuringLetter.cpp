// Find the most occurring letter in a lower case string
#include <iostream>
#include <string>
using namespace std;

char mostOccuringLetter(string str){   
    int freq[26] = {0};
    
    for (int i = 0; i < str.length(); i++) {
        freq[str[i] - 'a']++;
    }
    
    int maxFreq = 0;
    char mostFrequentChar = '\0';
    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequentChar = 'a' + i;
        }
    }
    
    return mostFrequentChar;
}

int main() {
    string str;
    cout << "Enter a lower case string: ";
    getline(cin, str);

    char result = mostOccuringLetter(str);
    if (result != '\0') {
        cout << "Most occurring letter: " << result << endl;
    } else {
        cout << "No lowercase letters found in the input string." << endl;
    }

    return 0;
}