#include <bits/stdc++.h>
using namespace std;

int main() {

  int counter = 0;

  for (int i = 0; i < 6; i++) {
    float N;
    cin >> N;
    if (N > 0) {
      counter++;
    }
  }

  cout << counter << " valores positivos" << endl;

  return 0;
}
