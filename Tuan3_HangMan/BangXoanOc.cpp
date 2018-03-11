#include <iostream>
#include <vector>

using namespace std;

void solve(vector< vector<int> >& v) {
    int cnt = 1;
    int m = v.size() - 1;
    int n = v[0].size() - 1;
    for(int i = 0; cnt <= (m + 1) * (n + 1); ++i) {
        for(int j = i; j <= n - i; ++j) {
            v[i][j] = cnt++;
        }
        if(cnt > (m + 1) * (n + 1))
            break;
        for(int j = i + 1; j <= m - i; ++j) {
            v[j][n - i] = cnt++;
        }
        if(cnt > (m + 1) * (n + 1))
            break;
        for(int j = n - i - 1; j >= i; --j) {
            v[m - i][j] = cnt++;
        }
        if(cnt > (m + 1) * (n + 1))
            break;
        for(int j = m - i - 1; j >= i + 1; --j) {
            v[j][i] = cnt++;
        }
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector< vector<int> > v(m, vector<int>(n, 0));
    solve(v);
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}