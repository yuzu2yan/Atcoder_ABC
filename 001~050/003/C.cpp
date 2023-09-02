#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, N;
  double rate = 0.0;
  cin >> N >> K;
  vector<int> R(N);
  for (int i = 0; i < N; i++) cin >> R[i];
  sort(R.begin(), R.end());
  for (int i = 0; i < K; i++) {
    rate = (rate + R[N - K + i]) / 2;
  }
  cout << fixed << setprecision(6) << rate << endl;
}