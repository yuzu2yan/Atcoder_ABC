#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] != T[i]) {
      if (S[i] == '@' && (T[i] == 'a' || T[i] == 't' || T[i] == 'c' || T[i] == 'o' || T[i] == 'd' || T[i] == 'e' || T[i] == 'r' || T[i] == '@')) continue;
      else if (T[i] == '@' && (S[i] == 'a' || S[i] == 't' || S[i] == 'c' || S[i] == 'o' || S[i] == 'd' || S[i] == 'e' || S[i] == 'r' || S[i] == '@')) continue;
      else {
        cout << "You will lose" << endl;
        return 0;
      }
    }
  }
  cout << "You can win" << endl;
}