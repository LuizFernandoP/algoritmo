#include <bits/stdc++.h>

using namespace std;

int main(){
  float I = 0, J = 1;

  while (I < 2.2) {
    cout << "I=" << I << " " << "J=" << J+I << endl;
    cout << "I=" << I << " " << "J=" << J+1+I << endl;
    cout << "I=" << I << " " << "J=" << J+2+I << endl;
    I += 0.2;
    }

  return 0;
}
