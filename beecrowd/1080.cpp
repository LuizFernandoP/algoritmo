#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, highest = 0, posic;

    for (int i = 1; i <= 100; i++) {
        cin >> n;
        if (n > highest) {
            highest = n;
            posic = i;
        }
    }

    cout << highest << "\n" << posic << "\n";

    return 0;
}
