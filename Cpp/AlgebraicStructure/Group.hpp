#pragma once
#include "Template/SmallTemplate.hpp"

template<class T>
struct GroupSum {
  T x;
  GroupSum(T x_): x(x_) {}
  GroupSum(): GroupSum(e()) {}
  static GroupSum e() { return 0; }
  GroupSum inv() const { return e().x - x; }
  friend GroupSum op(const GroupSum &a, const GroupSum &b) { return a.x + b.x; }
};

/**
 * @brief アフィン写像 y = ax + b
 * @tparam T 
 */
template<class T>
struct GroupAffine {
  T a, b;
  GroupAffine(T a_, T b_): a(a_), b(b_) {}
  GroupAffine(): GroupAffine(e()) {}
  static GroupAffine e() { return {1, 0}; }
  GroupAffine inv() const { return {1 / a, -b / a}; }
  friend GroupAffine op(const GroupAffine &p, const GroupAffine &q) { return {p.a * q.a, p.b * q.a + q.b}; }
};
