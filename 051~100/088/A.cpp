#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int n,a;
  cin >> n >> a;
  n = n % 1000;
  n = n % 500;
  if(n > a) cout << "No" << endl;
  if(n <= a) cout << "Yes" << endl;
}