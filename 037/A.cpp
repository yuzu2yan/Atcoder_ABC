#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  int max = 0;
  for (int a=0; a*A <= C; a++) {
    for (int b=0; b*B <= C; b++) {
      if (a*A + b*B <= C && a + b > max) {
        max = a + b;
      }
    }
  }
  cout << max << endl;
}