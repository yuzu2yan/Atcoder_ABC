#include <bits/stdc++.h>
using namespace std;

int main(){
  string A, B;
  cin >> A >> B;
  int a, b;
  a = A.size();
  b = B.size();
  if(a > b)
    cout << A << endl;
  else
    cout << B << endl;
}