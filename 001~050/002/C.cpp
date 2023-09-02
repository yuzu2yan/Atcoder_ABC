#include <bits/stdc++.h>
using namespace std;

int main() {
  double xa, ya, xb, yb, xc, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;
  xa *= -1.0;
  ya *= -1.0;
  xb += xa;
  yb += ya;
  xc += xa;
  yc += ya;
  double s = abs(xb * yc - yb * xc) / 2.0;
  printf("%f\n", s);
}