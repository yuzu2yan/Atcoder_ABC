#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<char> S(5);
  int N;
  for (int i = 0; i < 5; i++)
    cin >> S.at(i);
  cin >> N;
  int f,s;
  f = N / 5;
  if (N % 5 == 0)
    f--;
  s = N % 5;
  if (s == 0)
    s = 5;
  cout << S.at(f) << S.at(s-1) << endl;
}