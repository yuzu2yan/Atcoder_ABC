#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (abs(a - c) <= d || (abs(a - b) <= d && abs(b - c) <= d))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}