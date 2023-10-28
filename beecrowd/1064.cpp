#include <bits/stdc++.h>
using namespace std;

int main() {
  int counter = 0;
  float sum = 0;

  for (int i = 0; i < 6; i++) {
    float n;
    cin >> n;
    if (n >= 0) {
      counter++;
      sum += n;
    }
  }

  cout << counter << " valores positivos" << endl;
  cout << fixed << setprecision(1) << sum / counter << endl;

  return 0;
}
