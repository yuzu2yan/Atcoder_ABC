#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  if (A == 1) A = 14;
  if (B == 1) B = 14;
  cout << (A == B ? "Draw" : (A > B ? "Alice" : "Bob")) << endl;
}