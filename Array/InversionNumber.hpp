#include "Template/SmallTemplate.hpp"
#include "Array/BinaryIndexedTree.hpp"

/**
 * 転倒数 $O(n \log n)$
 * 座標圧縮が必要
 */
template <typename T> ll inversion_number(const vector<T> &v) {
  // v = compress(v);
  int n = v.size();
  BinaryIndexedTree<int> b(n);
  ll ret = 0;
  for(int i = 0; i < n; i++) {
    ret += i - b.sum(v[i]);
    b.add(v[i], 1);
  }
  return ret;
}
