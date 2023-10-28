#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  double ans;

  if (x == 1){
    ans = (4.0 * y);
  } else if (x == 2) {
    ans = (4.5 * y);
  } else if (x == 3) {
    ans = (5.0 * y);
  } else if (x == 4) {
    ans = (2.0 * y);
  } else if (x == 5) {
    ans = (1.5 * y);
  }

cout << fixed << setprecision(2) << "Total: R$ " << ans << endl;

  return 0;
}
