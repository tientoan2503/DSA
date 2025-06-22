#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    char arr[] = {'H', 'Q', '9'};
    string s;
    getline(cin, s);
    bool result = false;
    for (char str: arr) {
        if (s.find(str) != string::npos) {
            result = true;
            break;
        }
    }
    cout << (result ? "YES" : "NO") << endl;
}