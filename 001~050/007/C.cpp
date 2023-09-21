#include <bits/stdc++.h>
using namespace std;

int main() {
  int R, C;
  cin >> R >> C;
  int sx, sy, gx, gy;
  cin >> sy >> sx >> gy >> gx;
  vector <vector <char>> maze(R, vector <char>(C));
  vector <vector <char>> done_maze(R, vector <char>(C));
  for (int i = 0; i < R; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < C; j++) {
      maze.at(i).at(j) = s.at(j);
      done_maze.at(i).at(j) = s.at(j);
    }
  }

  queue <tuple <int, int, int>> que;
  que.push(make_tuple(sx-1, sy-1, 0));
  done_maze.at(sy-1).at(sx-1) = '#';
  int vx[] = {1, 0, -1, 0};
  int vy[] = {0, 1, 0, -1};
  while (!que.empty()) {
    tuple<int, int, int> p = que.front();
    int x = get<0>(p);
    int y = get<1>(p);
    int val = get<2>(p);
    que.pop();
    if (x == gx-1 && y == gy-1) {
      cout << val << endl;
      return 0;
    }
    for (int i = 0; i < 4; i++) {
      int nx = x + vx[i];
      int ny = y + vy[i];
      if (nx >= 0 && nx < C && ny >= 0 && ny < R && maze.at(ny).at(nx) == '.' && done_maze.at(ny).at(nx) == '.') {
        que.push(make_tuple(nx, ny, val + 1));
        done_maze.at(ny).at(nx) = '#';
      }
    }
  }
}