#include <iostream>
using namespace std;

bool eq(int a1[], int a2[], int n) {
    for (int i = 0; i < n; i++) {
        if (a1[i] != a2[i])
            return false;
    }
    return true;
}

int main() {
    int n; cin>>n;
    int arr1[n], arr2[n];
    for(int i = 0; i < n; i++) {
        cin>>arr1[i];
    }

    for(int i = 0; i < n; i++) {
        cin>>arr2[i];
    }

    bool result = eq(arr1, arr2, n);
    if(result) {
        cout<<"true";
    } else {
        cout<<"false";
    }
    return 0;
}
