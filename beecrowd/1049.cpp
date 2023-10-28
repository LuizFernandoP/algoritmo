#include <bits/stdc++.h>
using namespace std;

int main(){
  string a;
  cin >> a;

  if (a == "vertebrado"){
    string b;
    cin >> b;

    if (b == "ave"){
      string c;
      cin >> c;

      if (c == "carnivoro"){
        cout << "aguia" << endl;
      } else {
        cout << "pomba" << endl;
      }
    } else {
      string c;
      cin >> c;

      if (c == "onivoro") {
        cout << "homem" << endl;
      } else {
        cout << "vaca" << endl;
      }
    }
  } else {
    string b;
    cin >> b;

    if (b == "inseto") {
      string c;
      cin >> c;

      if (c == "hematofago") {
        cout << "pulga" << endl;
      } else {
        cout << "lagarta" << endl;
      }
    } else {
      string c;
      cin >> c;

      if (c == "hematofago") {
        cout << "sanguessuga" << endl;
      } else {
        cout << "minhoca" << endl;
      }
    }
  }

  return 0;
}
