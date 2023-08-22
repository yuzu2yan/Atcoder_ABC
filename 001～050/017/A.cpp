#include <bits/stdc++.h>
using namespace std;

int main(){
  int sum = 0;
  for (int i = 0; i < 3; i++) {
    int s, e;
    cin >> s >> e;
    sum += s * e / 10;
  }
  cout << sum << endl;
}