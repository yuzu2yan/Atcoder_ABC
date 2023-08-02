#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  char c = 'A';
  for (int i = 0; i < 3; i++) {
    int win = 3;
    if (c == 'A') {
      if (A > B) {
        win--;
      }
      if (A > C) {
        win--;
      }
      cout << win << endl;
      c = 'B';
    }
    else if (c == 'B') {
      if (B > A) {
        win--;
      }
      if (B > C) {
        win--;
      }
      cout << win << endl;
      c = 'C';
    }
    else if (c == 'C') {
      if (C > A) {
        win--;
      }
      if (C > B) {
        win--;
      }
      cout << win << endl;
    }
  }
}