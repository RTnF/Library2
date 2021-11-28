#define PROBLEM "https://judge.yosupo.jp/problem/staticrmq"
#include "Array/SparseTable.hpp"

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  SparseTable st(a);
  while(q--){
    int l, r;
    cin >> l >> r;
    cout << st.query(l, r) << '\n';
  }
}