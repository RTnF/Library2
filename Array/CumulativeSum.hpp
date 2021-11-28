#include "Template/SmallTemplate.hpp"

/**
 * 累積和
 */
template <typename T = ll> class CumulativeSum {
  vector<T> cs;
  int n;

public:
  // 累積和の構築 $O(n)$
  CumulativeSum(const vector<T> &v) : cs(v.size() + 1), n(v.size()) {
    cs[0] = T(0);
    for(int i = 1; i <= n; i++) {
      cs[i] = cs[i - 1] + v[i - 1];
    }
  }
  // [0, a) の和を返す 0-n
  T sum(int a) {
    assert(0 <= a && a <= n);
    return cs[a];
  }
  // [a, b) の和を返す 0-a-b-n
  T sum(int a, int b) {
    assert(0 <= a && a <= b && b <= n);
    return cs[b] - cs[a];
  }
};
