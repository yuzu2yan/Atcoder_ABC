#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, S, T, W;
  cin >> N >> S >> T >> W;
  int count = 0;
  if (S <= W && W <= T) {
    count++;
  }
  for (int i = 1; i < N; i++) {
    int A;
    cin >> A;
    W += A;
    if (S <= W && W <= T) {
      count++;
    }
  }
  cout << count << endl;
}