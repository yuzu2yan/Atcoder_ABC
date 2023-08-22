#include <bits/stdc++.h>
using namespace std;

int main(){
  double A, B, C, D, taka, aoki;
  cin >> A >> B >> C >> D;
  taka = B/A;
  aoki = D/C;
  if (taka > aoki) {
    cout << "TAKAHASHI" << endl;
    return 0;
  }
  else if (taka == aoki) {
    cout << "DRAW" << endl;
    return 0;
  }
  else {
    cout << "AOKI" << endl;
    return 0;
  }
}