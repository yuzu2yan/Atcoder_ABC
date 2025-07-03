#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <utility>

int main() {
  int N, H, W;
  std::cin >> H >> W >> N;
  std::unordered_set<int> row, col;
  std::vector<std::pair<int, int>> card(N);

  for (int i = 0; i < N; i++) {
    int r, c;
    std::cin >> r >> c;
    card[i] = {r, c};
    row.insert(r);
    col.insert(c);
  }

  std::vector<int> row_vec(row.begin(), row.end());
  std::sort(row_vec.begin(), row_vec.end());
  std::unordered_map<int, int> row_map;
  for (size_t i = 0; i < row_vec.size(); i++) {
    row_map[row_vec[i]] = i + 1;
  }

  std::vector<int> col_vec(col.begin(), col.end());
  std::sort(col_vec.begin(), col_vec.end());
  std::unordered_map<int, int> col_map;
  for (size_t i = 0; i < col_vec.size(); i++) {
    col_map[col_vec[i]] = i + 1;
  }

  for (auto [r, c] : card) {
    int r_idx = row_map[r];
    int c_idx = col_map[c];
    std::cout << r_idx << " " << c_idx << std::endl;
  }

  return 0;
}