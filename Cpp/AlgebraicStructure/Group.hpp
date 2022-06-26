#pragma once
#include "Template/SmallTemplate.hpp"

template<class T>
struct GroupSum {
  T x;
  GroupSum(T x_): x(x_) {}
  GroupSum(): GroupSum(e()) {}
  static GroupSum e() { return 0; }
  GroupSum rev() const { return e().x - x; }
  friend GroupSum op(const GroupSum &a, const GroupSum &b) { return a.x + b.x; }
};
