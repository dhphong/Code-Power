#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int solve(string mainStr, string subStr, int beg) {
    int lenSub = subStr.length(), len = mainStr.length();
    int currPosition = beg;
    int cnt = 1;
    while (true) {
        int nextPosition = mainStr.find(subStr, currPosition + lenSub);
        if (nextPosition - currPosition != lenSub) {
            return cnt;
        } else if (nextPosition - currPosition == lenSub) {
            cnt++;
        }

        currPosition = nextPosition;
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    for (int i = 0; i < k; i++) {
        int beg, end;
        cin >> beg >> end;
        cout << solve(str, str.substr(beg - 1, end - beg + 1), beg - 1) << endl;
    }
    return 0;
}