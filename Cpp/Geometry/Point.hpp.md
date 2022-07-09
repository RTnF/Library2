---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: Cpp/Template/SmallTemplate.hpp
    title: Cpp/Template/SmallTemplate.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/SortPointsByArgument.test.cpp
    title: Cpp/Verify/SortPointsByArgument.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Template/SmallTemplate.hpp:\
    \ line -1: no such header\n"
  code: "#pragma once\n#include \"Template/SmallTemplate.hpp\"\n\ntemplate<class T\
    \ = ll>\nstruct Point {\n  T x, y;\n  int8_t quadrant; // 0-index \u8C61\u9650\
    \n  Point(): x(0), y(0) { setQuadrant(); }\n  Point(T x_, T y_): x(x_), y(y_)\
    \ { setQuadrant(); }\n  void setX(T x_) {\n    x = x_;\n    setQuadrant();\n \
    \ }\n  void setY(T y_) {\n    y = y_;\n    setQuadrant();\n  }\n  void setQuadrant()\
    \ {\n    int8_t xm = x < 0, ym = y < 0;\n    // 0123\n    // quadrant = (ym <<\
    \ 1) + (xm ^ ym);\n    // 2301\n    quadrant = (!ym << 1) + (xm ^ ym);\n  }\n\
    };\n\ntemplate<class T>\nbool operator<(const Point<T> &a, const Point<T> &b)\
    \ {\n  if(a.quadrant != b.quadrant) {\n    return a.quadrant < b.quadrant;\n \
    \ }\n  T cross = a.x * b.y - b.x * a.y;\n  if(cross != 0) {\n    return cross\
    \ > 0;\n  } else if(a.x != b.x) {\n    return a.x < b.x;\n  } else {\n    return\
    \ a.y < b.y;\n  }\n}\n\ntemplate<class T>\nostream &operator<<(ostream &os, const\
    \ Point<T> &p) {\n  os << p.x << ' ' << p.y;\n  return os;\n}\n\ntemplate<class\
    \ T = ll>\nstruct Point3 {\n  T x, y, z;\n  Point3(T x_, T y_, T z_): x(x_), y(y_),\
    \ z(z_) {}\n};\n"
  dependsOn:
  - Cpp/Template/SmallTemplate.hpp
  isVerificationFile: false
  path: Cpp/Geometry/Point.hpp
  requiredBy: []
  timestamp: '2022-07-09 21:37:27+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Cpp/Verify/SortPointsByArgument.test.cpp
documentation_of: Cpp/Geometry/Point.hpp
layout: document
redirect_from:
- /library/Cpp/Geometry/Point.hpp
- /library/Cpp/Geometry/Point.hpp.html
title: Cpp/Geometry/Point.hpp
---
