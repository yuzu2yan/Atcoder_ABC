#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> a(3);
  for(int i=0;i<3;i++){
    cin >> a.at(i);
  }
  sort(a.begin(),a.end());
  int ans = 3;
  if(a.at(0) == a.at(1)){
    ans--;
  }
  if(a.at(1) == a.at(2)){
    ans--;
  }
  cout << ans << endl;
}