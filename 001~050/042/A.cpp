#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v(3);
  vector<int> s = {5, 5, 7};
  for(int i=0; i<3; i++) cin >> v.at(i);
  sort(v.begin(), v.end());
  bool result = equal(v.begin(), v.end(), s.begin());
  if (result)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}