#define PROBLEM "https://atcoder.jp/contests/agc001/tasks/agc001_a"
#include "Template/SmallTemplate.hpp"

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> l(n * 2);
  for(int i = 0; i < n * 2; i++) {
    cin >> l[i];
  }
  sort(begin(l), end(l));
  int ans = 0;
  for(int i = 0; i < n * 2; i += 2) {
    ans += l[i];
  }
  cout << ans << '\n';
}