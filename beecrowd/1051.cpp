#include <bits/stdc++.h>
using namespace std;

int main() {
  float income;
  cin >> income;

  if (income <= 2000.00) {
    cout << "Isento" << endl;
  } else if (income > 2000.00 && income <= 3000.00) {
    cout << "R$ " << fixed << setprecision(2) << (income - 2000) * 0.08 << endl;
  } else if (income > 3000.00 && income <= 4500.00) {
    cout << "R$ " << fixed << setprecision(2) << (income - 3000) * 0.18 + 80 << endl;
  } else if (income > 4500.00) {
    cout << "R$ " << fixed << setprecision(2) << (income - 4500) * 0.28 + (1500 * 0.18) + 80 << endl;
  }

  return 0;
}
