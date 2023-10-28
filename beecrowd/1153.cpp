#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, aux = 1;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        aux *= i;
    }

    cout << aux << endl;

    return 0;
}