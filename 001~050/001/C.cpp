#include <bits/stdc++.h>
using namespace std;

int main(){
  double D, W;
  cin >> D >> W;
  D /= 10;
  W /= 60;
  W = int(W * 10 + 0.5) / 10.0;
  if (W <= 0.2) cout << "C ";
  else if (11.25 <= D && D < 33.75) cout << "NNE ";
  else if (33.75 <= D && D < 56.25) cout << "NE ";
  else if (56.25 <= D && D < 78.75) cout << "ENE ";
  else if (78.75 <= D && D < 101.25) cout << "E ";
  else if (101.25 <= D && D < 123.75) cout << "ESE ";
  else if (123.75 <= D && D < 146.25) cout << "SE ";
  else if (146.25 <= D && D < 168.75) cout << "SSE ";
  else if (168.75 <= D && D < 191.25) cout << "S ";
  else if (191.25 <= D && D < 213.75) cout << "SSW ";
  else if (213.75 <= D && D < 236.25) cout << "SW ";
  else if (236.25 <= D && D < 258.75) cout << "WSW ";
  else if (258.75 <= D && D < 281.25) cout << "W ";
  else if (281.25 <= D && D < 303.75) cout << "WNW ";
  else if (303.75 <= D && D < 326.25) cout << "NW ";
  else if (326.25 <= D && D < 348.75) cout << "NNW ";
  else cout << "N ";

  if (W <= 0.2) cout << 0 << endl;
  else if (W <= 1.5) cout << 1 << endl;
  else if (W <= 3.3) cout << 2 << endl;
  else if (W <= 5.4) cout << 3 << endl;
  else if (W <= 7.9) cout << 4 << endl;
  else if (W <= 10.7) cout << 5 << endl;
  else if (W <= 13.8) cout << 6 << endl;
  else if (W <= 17.1) cout << 7 << endl;
  else if (W <= 20.7) cout << 8 << endl;
  else if (W <= 24.4) cout << 9 << endl;
  else if (W <= 28.4) cout << 10 << endl;
  else if (W <= 32.6) cout << 11 << endl;
  else cout << 12 << endl;
}