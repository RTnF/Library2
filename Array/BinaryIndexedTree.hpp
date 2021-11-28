#include "Template/SmallTemplate.hpp"

/**
 * Binary Indexed Tree 0-indexed
 */
template <typename T = ll> class BinaryIndexedTree {
  int n;
  vector<T> bit;

public:
  // n項全て0のBIT
  BinaryIndexedTree(int n_) : n(n_), bit(n_, 0) {
  }
  // vectorから構築 $O(n \log n)$
  BinaryIndexedTree(const vector<T> &v) : n(v.size()) {
    build(v);
  }
  // [a]にwを加算 $O(\log n)$
  void add(int a, T w) {
    for(; a < n; a |= a + 1) {
      bit[a] += w;
    }
  }
  // v: 0-indexed, size = n $O(n \log n)$
  void build(const vector<T> &v) {
    n = v.size();
    bit = v;
    int unit = 1;
    while(unit * 2 <= n) {
      for(int i = unit * 2 - 1; i < n; i += unit * 2) {
        bit[i] += bit[i - unit];
      }
      unit <<= 1;
    }
  }
  // [0, a)の和 $O(\log n)$
  T sum(int a) {
    assert(0 <= a && a <= n);
    if(a == 0) {
      return 0;
    }
    a--;
    T ret = 0;
    for(; a >= 0; a = (a & (a + 1)) - 1) {
      ret += bit[a];
    }
    return ret;
  }
  // [a, b)の和 $O(\log n)$
  T sum(int a, int b) {
    assert(0 <= a && a <= b && b <= n);
    return sum(b) - sum(a);
  }
};
