#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  if (N % 3 == 0 || to_string(N).find("3") != string::npos)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}