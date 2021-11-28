---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Array/BinaryIndexedTree.hpp
    title: Array/BinaryIndexedTree.hpp
  - icon: ':heavy_check_mark:'
    path: Template/SmallTemplate.hpp
    title: Template/SmallTemplate.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/point_add_range_sum
    links:
    - https://judge.yosupo.jp/problem/point_add_range_sum
  bundledCode: "#line 1 \"Array/PointAddRangeSum.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\
    \n#line 2 \"Template/SmallTemplate.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\nusing ll = long long;\nusing ull = unsigned long long;\nusing ld = long\
    \ double;\nconstexpr ll MOD = 1e9 + 7;\nconstexpr ll INF = 1e+18;\nconstexpr ld\
    \ EPS = 1e-12L;\nconstexpr ld PI = 3.14159265358979323846L;\n#line 2 \"Array/BinaryIndexedTree.hpp\"\
    \n\n/**\n * Binary Indexed Tree 0-indexed\n */\ntemplate <typename T = ll> class\
    \ BinaryIndexedTree {\n  int n;\n  vector<T> bit;\n\npublic:\n  // n\u9805\u5168\
    \u30660\u306EBIT\n  BinaryIndexedTree(int n_) : n(n_), bit(n_, 0) {\n  }\n  //\
    \ vector\u304B\u3089\u69CB\u7BC9 $O(n \\log n)$\n  BinaryIndexedTree(const vector<T>\
    \ &v) : n(v.size()) {\n    build(v);\n  }\n  // [a]\u306Bw\u3092\u52A0\u7B97 $O(\\\
    log n)$\n  void add(int a, T w) {\n    for(; a < n; a |= a + 1) {\n      bit[a]\
    \ += w;\n    }\n  }\n  // v: 0-indexed, size = n $O(n \\log n)$\n  void build(const\
    \ vector<T> &v) {\n    n = v.size();\n    bit = v;\n    int unit = 1;\n    while(unit\
    \ * 2 <= n) {\n      for(int i = unit * 2 - 1; i < n; i += unit * 2) {\n     \
    \   bit[i] += bit[i - unit];\n      }\n      unit <<= 1;\n    }\n  }\n  // [0,\
    \ a)\u306E\u548C $O(\\log n)$\n  T sum(int a) {\n    assert(0 <= a && a <= n);\n\
    \    if(a == 0) {\n      return 0;\n    }\n    a--;\n    T ret = 0;\n    for(;\
    \ a >= 0; a = (a & (a + 1)) - 1) {\n      ret += bit[a];\n    }\n    return ret;\n\
    \  }\n  // [a, b)\u306E\u548C $O(\\log n)$\n  T sum(int a, int b) {\n    assert(0\
    \ <= a && a <= b && b <= n);\n    return sum(b) - sum(a);\n  }\n};\n#line 3 \"\
    Array/PointAddRangeSum.test.cpp\"\n\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n\
    \  int n, q;\n  cin >> n >> q;\n  vector<ll> a(n);\n  for(int i = 0; i < n; i++)\
    \ {\n    cin >> a[i];\n  }\n  BinaryIndexedTree cs(a);\n  while(q--) {\n    int\
    \ t, x;\n    cin >> t >> x;\n    ll y;\n    cin >> y;\n    if(t) {\n      cout\
    \ << cs.sum(x, y) << '\\n';\n    } else {\n      cs.add(x, y);\n    }\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\
    #include \"Array/BinaryIndexedTree.hpp\"\n\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n\
    \  int n, q;\n  cin >> n >> q;\n  vector<ll> a(n);\n  for(int i = 0; i < n; i++)\
    \ {\n    cin >> a[i];\n  }\n  BinaryIndexedTree cs(a);\n  while(q--) {\n    int\
    \ t, x;\n    cin >> t >> x;\n    ll y;\n    cin >> y;\n    if(t) {\n      cout\
    \ << cs.sum(x, y) << '\\n';\n    } else {\n      cs.add(x, y);\n    }\n  }\n}"
  dependsOn:
  - Array/BinaryIndexedTree.hpp
  - Template/SmallTemplate.hpp
  isVerificationFile: true
  path: Array/PointAddRangeSum.test.cpp
  requiredBy: []
  timestamp: '2021-11-28 16:47:41+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Array/PointAddRangeSum.test.cpp
layout: document
redirect_from:
- /verify/Array/PointAddRangeSum.test.cpp
- /verify/Array/PointAddRangeSum.test.cpp.html
title: Array/PointAddRangeSum.test.cpp
---
