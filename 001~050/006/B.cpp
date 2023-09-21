#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n, f = 0, s = 0, t = 1;
  cin >> n;
  for (int i = 4; i <= n; i++) {
    long long int tmp = f + s + t;
    f = s;
    s = t;
    t = tmp % 10007;
  }
  if (n <= 2)
    t = 0;
  cout << t << endl;
}