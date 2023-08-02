#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C, K, S, T;
  cin >> A >> B >> C >> K >> S >> T;
  int sum = 0;
  sum += A * S + B * T;
  if (S + T >= K)
    sum -= C * (S + T);
  cout << sum << endl;
}