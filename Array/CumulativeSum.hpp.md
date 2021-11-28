---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Template/SmallTemplate.hpp
    title: Template/SmallTemplate.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Array/StaticRangeSum.test.cpp
    title: Array/StaticRangeSum.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"Template/SmallTemplate.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\nusing ll = long long;\nusing ull = unsigned long long;\n\
    using ld = long double;\nconstexpr ll MOD = 1e9 + 7;\nconstexpr ll INF = 1e+18;\n\
    constexpr ld EPS = 1e-12L;\nconstexpr ld PI = 3.14159265358979323846L;\n#line\
    \ 2 \"Array/CumulativeSum.hpp\"\n\n/**\n * \u7D2F\u7A4D\u548C\n */\ntemplate <typename\
    \ T = ll> class CumulativeSum {\n  vector<T> cs;\n  int n;\n\npublic:\n  // \u7D2F\
    \u7A4D\u548C\u306E\u69CB\u7BC9 $O(n)$\n  CumulativeSum(const vector<T> &v) : cs(v.size()\
    \ + 1), n(v.size()) {\n    cs[0] = T(0);\n    for(int i = 1; i <= n; i++) {\n\
    \      cs[i] = cs[i - 1] + v[i - 1];\n    }\n  }\n  // [0, a) \u306E\u548C\u3092\
    \u8FD4\u3059 0-n\n  T sum(int a) {\n    assert(0 <= a && a <= n);\n    return\
    \ cs[a];\n  }\n  // [a, b) \u306E\u548C\u3092\u8FD4\u3059 0-a-b-n\n  T sum(int\
    \ a, int b) {\n    assert(0 <= a && a <= b && b <= n);\n    return cs[b] - cs[a];\n\
    \  }\n};\n"
  code: "#include \"Template/SmallTemplate.hpp\"\n\n/**\n * \u7D2F\u7A4D\u548C\n */\n\
    template <typename T = ll> class CumulativeSum {\n  vector<T> cs;\n  int n;\n\n\
    public:\n  // \u7D2F\u7A4D\u548C\u306E\u69CB\u7BC9 $O(n)$\n  CumulativeSum(const\
    \ vector<T> &v) : cs(v.size() + 1), n(v.size()) {\n    cs[0] = T(0);\n    for(int\
    \ i = 1; i <= n; i++) {\n      cs[i] = cs[i - 1] + v[i - 1];\n    }\n  }\n  //\
    \ [0, a) \u306E\u548C\u3092\u8FD4\u3059 0-n\n  T sum(int a) {\n    assert(0 <=\
    \ a && a <= n);\n    return cs[a];\n  }\n  // [a, b) \u306E\u548C\u3092\u8FD4\u3059\
    \ 0-a-b-n\n  T sum(int a, int b) {\n    assert(0 <= a && a <= b && b <= n);\n\
    \    return cs[b] - cs[a];\n  }\n};\n"
  dependsOn:
  - Template/SmallTemplate.hpp
  isVerificationFile: false
  path: Array/CumulativeSum.hpp
  requiredBy: []
  timestamp: '2021-11-28 09:53:00+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Array/StaticRangeSum.test.cpp
documentation_of: Array/CumulativeSum.hpp
layout: document
redirect_from:
- /library/Array/CumulativeSum.hpp
- /library/Array/CumulativeSum.hpp.html
title: Array/CumulativeSum.hpp
---
