#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v{1, 2, 3, 4, 5, 6};
  int N, first, last, tmp;
  cin >> N;
  for (int i = 0; i < N; i++) {
    first = i % 5;
    last = (i % 5) + 1;
    tmp = v[first];
    v[first] = v[last];
    v[last] = tmp;
  }
  for (int i = 0; i < 6; i++) cout << v[i];
  cout << endl;
}