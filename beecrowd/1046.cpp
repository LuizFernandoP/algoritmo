#include <bits/stdc++.h>
using namespace std;

int main() {
  int S, E;
  cin >> S >> E;

  if (S == E) {
    cout << "O JOGO DUROU 24 HORA(S)" << endl;
  } else if (E > S) {
    cout << "O JOGO DUROU " << E - S << " HORA(S)" << endl;
  } else {
    cout << "O JOGO DUROU " << (24 - S) + E << " HORA(S)" << endl;
  }

  return 0;
}
