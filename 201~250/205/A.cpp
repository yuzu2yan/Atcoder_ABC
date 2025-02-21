#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  if (A == 0) cout << "0" << endl;
  else cout << (double)B / 100.0 * A << endl;
}