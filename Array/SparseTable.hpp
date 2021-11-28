#include "Template/SmallTemplate.hpp"
#include "Utility/BitOperation.hpp"

/**
 * Sparse Table
 * 構築 $O(n \log n)$
 * クエリ $O(1)$
 * 遷移律 $(A \cdot B) \cdot C = A \cdot (B \cdot C)$ と冪等性 $A \cdot A = A$ が必要(max, min, ...)
 * 2冪の領域に対して総minを計算しておき、クエリに2個の領域(被りあり)のminで答える
 */
template <typename T = ll> class SparseTable {
  vector<vector<T>> st;
  int n;

public:
  // Sparse Tableの構築 $O(n \log n)$
  SparseTable(const vector<T> &v) : n(v.size()) {
    assert(n > 0);
    st.reserve(32);
    st.emplace_back(v);
    for(int i = 1; n - (1 << i) + 1 > 0; i++) {
      st.emplace_back();
      st[i].reserve(n - (1 << i) + 1);
      for(int j = 0; j < n - (1 << i) + 1; j++) {
        st[i].emplace_back(min(st[i - 1][j], st[i - 1][j + (1 << (i - 1))]));
      }
    }
  }
  // [l, r) のクエリ $O(1)$ 0 <= l < r <= n
  T query(int l, int r) {
    assert(0 <= l && l < r && r <= n);
    int m = r - l;
    int msb = msb32(m);
    int segment = 1 << msb;
    return min(st[msb][l], st[msb][r - segment]);
  }
};
