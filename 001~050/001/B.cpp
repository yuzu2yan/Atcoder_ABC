#include <bits/stdc++.h>
using namespace std;

int main(){
  double m;
  cin >> m;
  m /= 1000;
  if (m < 0.1) cout << "00" << endl;
  else if (m <= 5) {
    m *= 10;
    if (m < 10) cout << "0" << m << endl;
    else cout << m << endl;
  }
  else if (m <= 30) cout << m + 50 << endl;
  else if (m <= 70) cout << int((m - 30) / 5 + 80) << endl;
  else cout << 89 << endl;
}