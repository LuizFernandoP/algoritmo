#include <bits/stdc++.h>
using namespace std;

int main() {
  int Sh, Sm, Fh, Fm, S_time, F_time, T_time;
  cin >> Sh >> Sm >> Fh >> Fm;

  S_time = Sh * 60 + Sm;
  F_time = Fh * 60 + Fm;

  if ((F_time - S_time) < 0) {
    T_time = 1440 - S_time + F_time;
    cout << "O JOGO DUROU "<< T_time / 60 << " HORA(S) E " << T_time % 60 << " MINUTO(S)" << endl;
  } else if ((F_time - S_time) == 0) {
      cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
  } else {
      T_time = F_time - S_time;
      cout << "O JOGO DUROU "<< T_time / 60 << " HORA(S) E " << T_time % 60 << " MINUTO(S)" << endl;
  }

  return 0;
}
