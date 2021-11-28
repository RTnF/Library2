#define PROBLEM "https://judge.yosupo.jp/problem/static_range_sum"
#include "Array/CumulativeSum.hpp"

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, q;
  cin >> n >> q;
  vector<ll> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  CumulativeSum cs(a);
  while(q--){
    int l, r;
    cin >> l >> r;
    cout << cs.sum(l, r) << '\n';
  }
}