#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  string S;
  cin >> S;
  if (S[0] == S[1] || S[0] == S[2] || S[1] == S[2])
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
}