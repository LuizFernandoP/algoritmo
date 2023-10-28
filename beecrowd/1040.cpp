#include <bits/stdc++.h>
using namespace std;

int main() {
  float N1, N2, N3, N4;
  cin >> N1 >> N2 >> N3 >> N4;

  float average = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / (2 + 3 + 4 + 1);

  cout << fixed << setprecision(1) << "Media: " << average << endl;
  if (average >= 7) {
    cout << "Aluno aprovado." << endl;
  } else if (average >= 5 && average < 7) {
    cout << "Aluno em exame." << endl;
    float exam;
    cin >> exam;
    cout << fixed << setprecision(1) << "Nota do exame: " << exam << endl;
    if ((average + exam) / 2 >= 5) {
      cout << "Aluno aprovado." << endl;
      cout << fixed << setprecision(1) << "Media final: " << (average + exam) / 2 << endl;
    } else {
      cout << "Aluno reprovado." << endl;
    }
  } else {
    cout << "Aluno reprovado." << endl;
  }

  return 0;
}
