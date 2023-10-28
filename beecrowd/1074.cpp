#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;

    if (x != 0 && x % 2 == 0) {
      cout << "EVEN";
    } else if (x != 0 && x % 2 != 0) {
      cout << "ODD";
    }

    if (x > 0) {
      cout << " POSITIVE" << endl;
    } else if (x == 0) {
      cout << "NULL" << endl;
    } else {
      cout << " NEGATIVE" << endl;
    }
  }

  return 0;
}
