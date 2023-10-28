#include <bits/stdc++.h>
using namespace std;

int main() {
  int even = 0;
  int odd = 0;
  int positive = 0;
  int negative = 0;

  for (int i = 0; i < 5; i++) {
    int n;
    cin >> n;
    if (n > 0) {
      positive++;
    } else if (n < 0) {
      negative++;
    }
    if (n % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }

  cout << even << " valor(es) par(es)" << endl;
  cout << odd << " valor(es) impar(es)" << endl;
  cout << positive << " valor(es) positivo(s)" << endl;
  cout << negative << " valor(es) negativo(s)" << endl;

  return 0;
}
