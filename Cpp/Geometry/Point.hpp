#pragma once
#include "Template/SmallTemplate.hpp"

struct Point {
  ll x, y;
  int8_t quadrant; // 0-index 象限
  Point(ll x_, ll y_): x(x_), y(y_) { setQuadrant(); }
  void setX(ll x_) {
    x = x_;
    setQuadrant();
  }
  void setY(ll y_) {
    y = y_;
    setQuadrant();
  }
  void setQuadrant() {
    int8_t xm = x < 0, ym = y < 0;
    // 0123
    // quadrant = (ym << 1) + (xm ^ ym);
    // 2301
    quadrant = (!ym << 1) + (xm ^ ym);
  }
};

bool operator<(const Point &a, const Point &b) {
  if(a.quadrant != b.quadrant) {
    return a.quadrant < b.quadrant;
  }
  ll cross = a.x * b.y - b.x * a.y;
  if(cross != 0) {
    return cross > 0;
  } else if(a.x != b.x) {
    return a.x < b.x;
  } else {
    return a.y < b.y;
  }
}

ostream &operator<<(ostream &os, const Point &p) {
  os << p.x << ' ' << p.y;
  return os;
}

class Point3 {
public:
  ll x, y, z;
  Point3(ll x_, ll y_, ll z_): x(x_), y(y_), z(z_) {}
};
