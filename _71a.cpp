#include<iostream>
#include<string>
#include <vector>

using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    vector<string> convertedWords;
    for (int i = 0; i < testcase; i++) {
        string word;
        cin >> word;
        if (word.length() > 10) {
            string middleLettes = word.substr(1, word.length() - 2);
            convertedWords.push_back(string(1, word[0]) + to_string(word.length() - 2) + string(1, word[word.length() - 1]));
        } else {
            convertedWords.push_back(word);
        }
    }

    for (const string &word : convertedWords) {
        cout << word << endl;
    }
    return 0;
}