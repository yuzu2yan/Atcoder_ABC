#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string S;
  if (N <= 59)
    S = "Bad";
  else if (N <= 89)
    S = "Good";
  else if (N <= 99)
    S = "Great";
  else
    S = "Perfect";
  cout << S << endl;
}