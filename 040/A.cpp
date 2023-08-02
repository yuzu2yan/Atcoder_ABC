#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, x;
  cin >> n >> x;
  int first = x - 1;
  int last = n - x;
  if (first < last) {
    cout << first << endl;
  } else {
    cout << last << endl;
  }
}