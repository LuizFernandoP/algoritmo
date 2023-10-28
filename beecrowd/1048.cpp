#include <bits/stdc++.h>
using namespace std;

int main() {
  float salary, percent, temp;
  cin >> salary;
  temp = salary;

  if (salary <= 400) {
    percent = 0.15;
  } else if (salary > 400 && salary <= 800) {
    percent = 0.12;
  } else if (salary > 800 && salary <= 1200) {
    percent = 0.1;
  } else if (salary > 1200 && salary <= 2000) {
    percent = 0.07;
  } else {
    percent = 0.04;
  }

  salary = salary + (salary * percent);
  cout << "Novo salario: " << fixed << setprecision(2) << salary << endl;
  cout << "Reajuste ganho: " << fixed << setprecision(2) <<
  temp * percent << endl;
  cout << "Em percentual: " << fixed << setprecision(0) << percent * 100 << " %" << endl;

  return 0;
}
