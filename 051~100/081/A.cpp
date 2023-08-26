#include <bits/stdc++.h>
using namespace std;

int main() {
  int s,result=0;
  cin >> s;
  result += s/100;
  s = s%100;
  result += s/10;
  s = s%10;
  result += s;
  cout << result << endl;
}
