#include <iostream>
#include <string>

using namespace std;

int main() {
    string strBase;
    cin >> strBase;
    for (int i = 0; i < strBase.length(); ++i) {
        string ret(1, strBase[i]);
        for (int j = 0; j < strBase.length(); ++j) {
            string ret2(ret + strBase[j]);
            cout << ret2 << " ";
            for(int k = 0; k < strBase.length(); ++k) {
                cout << ret2 + strBase[k] << " ";
            }
        }
    }
    return 0;
}