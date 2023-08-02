#include <bits/stdc++.h>
using namespace std;

int main(){
  int l1, l2, l3;
  cin >> l1 >> l2 >> l3;
  if (l1 == l2) {
    cout << l3 << endl;
    return 0;
  }
  else if (l1 == l3) {
    cout << l2 << endl;
    return 0;
  }
  else {
    cout << l1 << endl;
    return 0;
  }
}