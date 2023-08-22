#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, D, ans = 0;
  cin >> A >> D;
  if ((A + 1) * D >= A * (D + 1)) {
    ans = (A + 1) * D;
  }
  else {
    ans = A * (D + 1);
  }
  cout << ans << endl;
}