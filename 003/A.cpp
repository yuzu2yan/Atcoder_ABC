#include <bits/stdc++.h>
using namespace std;

int main() {
  double N;
  double result = 0;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    result += i * 10000 / N;
  }
  cout << (int)result << endl;
}