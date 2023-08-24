#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  vector<int> arr = {a+b, a+c, b+c};
  auto minmax = minmax_element(arr.begin(), arr.end());
  cout << *(minmax.first) << endl;
}