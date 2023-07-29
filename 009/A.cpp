#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int count = 0;
  cin >> N;
  count += N / 2;
  count += N % 2;
  cout << count << endl;
}