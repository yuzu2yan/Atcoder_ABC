#include <bits/stdc++.h>
#include <limits.h> 
using namespace std;

int main() {
  int T, N;
  cin >> T >> N;
  vector<int> A(N);
  int now = 0;
  for (int i = 0; i < N; i++) cin >> A[i];
  int M;
  cin >> M;
  for (int i = 0; i < M; i++) {
    int B;
    cin >> B;
    while (A[now] + T < B && now != N) now++;
    if (now == N || A[now] > B) {
      cout << "no" << endl;
      return 0;
    }
    now++;
  }
  cout << "yes" << endl;
}