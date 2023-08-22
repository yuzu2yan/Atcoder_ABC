#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K = 1;
  cin >> N;
  if (N == 2) {
    cout << 1 << endl << 2 << endl;
    return 0;
  }
  while (N != 1) {
    N -= 2;
    K++;
  }
  cout << K << endl << 1 << endl;
  for (int i=1; i<K; i++) {
    cout << 2 << endl;
  }
}