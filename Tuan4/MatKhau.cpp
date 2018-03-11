#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> passwords(n);
    for(string& str : passwords)
        cin >> str;
    for(int i = 0; i < n; ++i) {
        string tmp(passwords[i]);
        reverse(tmp.begin(), tmp.end());
        if (find(passwords.begin() + i + 1, passwords.end(), tmp) != passwords.end()) {
            cout << tmp.length() << " " << tmp[tmp.length() / 2];
            break;
        }
    }
    return 0;
}