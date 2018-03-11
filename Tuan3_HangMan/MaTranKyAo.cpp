// Siamese method

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int> > matrix(n, vector<int>(n, 0));
    int currI = n-1;
    int currJ = n/2;
    int cnt = 2;
    matrix[currI][currJ] = 1;
    while(true) {
        if(matrix[(currI + 1) % n][(currJ + 1) % n] == 0) {
            currI = (currI + 1) % n;
            currJ = (currJ + 1) % n;
            matrix[currI][currJ] = cnt++;
        } else if(currI != 0 && matrix[(currI - 1) % n][currJ] == 0) {
            currI = (currI - 1) % n;
            matrix[currI][currJ] = cnt++;
        } else if(currI == 0 && matrix[n-1][currJ] == 0) {
            currI = n - 1;
            matrix[currI][currJ] = cnt++;
        } else
            break;
    }
    for(int i = n - 1; i >= 0; --i) {
        for(int j = 0; j < n; ++j)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}