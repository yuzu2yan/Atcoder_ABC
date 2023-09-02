#include <bits/stdc++.h>
#include <limits.h> 
using namespace std;

int main() {
  int N;
  cin >> N;
  int min = INT_MAX;
  for (int i = 0; i < N; i++) {
    int T;
    cin >> T;
    if (T < min) min = T;
  }
  cout << min << endl;
}