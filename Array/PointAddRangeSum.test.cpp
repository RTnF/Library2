#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"
#include "Array/BinaryIndexedTree.hpp"

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, q;
  cin >> n >> q;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  BinaryIndexedTree cs(a);
  while(q--) {
    int t, x;
    cin >> t >> x;
    ll y;
    cin >> y;
    if(t) {
      cout << cs.sum(x, y) << '\n';
    } else {
      cs.add(x, y);
    }
  }
}