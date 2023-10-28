#include <bits/stdc++.h>
using namespace std;

int main () {
    int t, arr[5], count = 0;
    cin >> t;

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        int n;
        cin >> n;
        arr[i] = n;
    }

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        if (t == arr[i]) {
            count++;
        }
    }

    cout << count << endl;
} 