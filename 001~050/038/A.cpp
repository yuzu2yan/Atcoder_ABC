#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  int n;
  cin >> S;
  n = S.size();
  if(S.at(n-1) == 'T')
    cout << "YES\n";
  else
    cout << "NO\n";
}