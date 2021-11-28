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
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"Template/SmallTemplate.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\nusing ll = long long;\nusing ull = unsigned long long;\n\
    using ld = long double;\nconstexpr ll MOD = 1e9 + 7;\nconstexpr ll INF = 1e+18;\n\
    constexpr ld EPS = 1e-12L;\nconstexpr ld PI = 3.14159265358979323846L;\n#line\
    \ 2 \"Array/BinaryIndexedTree.hpp\"\n\n/**\n * Binary Indexed Tree 0-indexed\n\
    \ */\ntemplate <typename T = ll> class BinaryIndexedTree {\n  int n;\n  vector<T>\
    \ bit;\n\npublic:\n  // n\u9805\u5168\u30660\u306EBIT\n  BinaryIndexedTree(int\
    \ n_) : n(n_), bit(n_, 0) {\n  }\n  // vector\u304B\u3089\u69CB\u7BC9 $O(n \\\
    log n)$\n  BinaryIndexedTree(const vector<T> &v) : n(v.size()) {\n    build(v);\n\
    \  }\n  // [a]\u306Bw\u3092\u52A0\u7B97 $O(\\log n)$\n  void add(int a, T w) {\n\
    \    for(; a < n; a |= a + 1) {\n      bit[a] += w;\n    }\n  }\n  // v: 0-indexed,\
    \ size = n $O(n \\log n)$\n  void build(const vector<T> &v) {\n    n = v.size();\n\
    \    bit = v;\n    int unit = 1;\n    while(unit * 2 <= n) {\n      for(int i\
    \ = unit * 2 - 1; i < n; i += unit * 2) {\n        bit[i] += bit[i - unit];\n\
    \      }\n      unit <<= 1;\n    }\n  }\n  // [0, a)\u306E\u548C $O(\\log n)$\n\
    \  T sum(int a) {\n    assert(0 <= a && a <= n);\n    if(a == 0) {\n      return\
    \ 0;\n    }\n    a--;\n    T ret = 0;\n    for(; a >= 0; a = (a & (a + 1)) - 1)\
    \ {\n      ret += bit[a];\n    }\n    return ret;\n  }\n  // [a, b)\u306E\u548C\
    \ $O(\\log n)$\n  T sum(int a, int b) {\n    assert(0 <= a && a <= b && b <= n);\n\
    \    return sum(b) - sum(a);\n  }\n};\n#line 3 \"Array/InversionNumber.hpp\"\n\
    \n/**\n * \u8EE2\u5012\u6570 $O(n \\log n)$\n * \u5EA7\u6A19\u5727\u7E2E\u304C\
    \u5FC5\u8981\n */\ntemplate <typename T> ll inversion_number(const vector<T> &v)\
    \ {\n  // v = compress(v);\n  int n = v.size();\n  BinaryIndexedTree<int> b(n);\n\
    \  ll ret = 0;\n  for(int i = 0; i < n; i++) {\n    ret += i - b.sum(v[i]);\n\
    \    b.add(v[i], 1);\n  }\n  return ret;\n}\n"
  code: "#include \"Template/SmallTemplate.hpp\"\n#include \"Array/BinaryIndexedTree.hpp\"\
    \n\n/**\n * \u8EE2\u5012\u6570 $O(n \\log n)$\n * \u5EA7\u6A19\u5727\u7E2E\u304C\
    \u5FC5\u8981\n */\ntemplate <typename T> ll inversion_number(const vector<T> &v)\
    \ {\n  // v = compress(v);\n  int n = v.size();\n  BinaryIndexedTree<int> b(n);\n\
    \  ll ret = 0;\n  for(int i = 0; i < n; i++) {\n    ret += i - b.sum(v[i]);\n\
    \    b.add(v[i], 1);\n  }\n  return ret;\n}\n"
  dependsOn:
  - Template/SmallTemplate.hpp
  - Array/BinaryIndexedTree.hpp
  isVerificationFile: false
  path: Array/InversionNumber.hpp
  requiredBy: []
  timestamp: '2021-11-28 16:47:41+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Array/InversionNumber.hpp
layout: document
redirect_from:
- /library/Array/InversionNumber.hpp
- /library/Array/InversionNumber.hpp.html
title: Array/InversionNumber.hpp
---