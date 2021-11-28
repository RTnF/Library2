---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Array/CumulativeSum.hpp
    title: Array/CumulativeSum.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/static_range_sum
    links:
    - https://judge.yosupo.jp/problem/static_range_sum
  bundledCode: "#line 1 \"Array/StaticRangeSum.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/static_range_sum\"\
    \n#line 2 \"Template/SmallTemplate.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\nusing ll = long long;\nusing ull = unsigned long long;\nusing ld = long\
    \ double;\nconstexpr ll MOD = 1e9 + 7;\nconstexpr ll INF = 1e+18;\nconstexpr ld\
    \ EPS = 1e-12L;\nconstexpr ld PI = 3.14159265358979323846L;\n#line 2 \"Array/CumulativeSum.hpp\"\
    \n\n/**\n * \u7D2F\u7A4D\u548C\n */\ntemplate <typename T = ll> class CumulativeSum\
    \ {\n  vector<T> cs;\n  int n;\n\npublic:\n  // \u7D2F\u7A4D\u548C\u306E\u69CB\
    \u7BC9 $O(n)$\n  CumulativeSum(const vector<T> &v) : cs(v.size() + 1), n(v.size())\
    \ {\n    cs[0] = T(0);\n    for(int i = 1; i <= n; i++) {\n      cs[i] = cs[i\
    \ - 1] + v[i - 1];\n    }\n  }\n  // [0, a) \u306E\u548C\u3092\u8FD4\u3059 0-n\n\
    \  T sum(int a) {\n    assert(0 <= a && a <= n);\n    return cs[a];\n  }\n  //\
    \ [a, b) \u306E\u548C\u3092\u8FD4\u3059 0-a-b-n\n  T sum(int a, int b) {\n   \
    \ assert(0 <= a && a <= b && b <= n);\n    return cs[b] - cs[a];\n  }\n};\n#line\
    \ 3 \"Array/StaticRangeSum.test.cpp\"\n\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n\
    \  int n, q;\n  cin >> n >> q;\n  vector<ll> a(n);\n  for(int i = 0; i < n; i++){\n\
    \    cin >> a[i];\n  }\n  CumulativeSum cs(a);\n  while(q--){\n    int l, r;\n\
    \    cin >> l >> r;\n    cout << cs.sum(l, r) << '\\n';\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/static_range_sum\"\n#include\
    \ \"Array/CumulativeSum.hpp\"\n\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n\
    \  int n, q;\n  cin >> n >> q;\n  vector<ll> a(n);\n  for(int i = 0; i < n; i++){\n\
    \    cin >> a[i];\n  }\n  CumulativeSum cs(a);\n  while(q--){\n    int l, r;\n\
    \    cin >> l >> r;\n    cout << cs.sum(l, r) << '\\n';\n  }\n}"
  dependsOn:
  - Array/CumulativeSum.hpp
  - Template/SmallTemplate.hpp
  isVerificationFile: true
  path: Array/StaticRangeSum.test.cpp
  requiredBy: []
  timestamp: '2021-11-28 09:53:00+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Array/StaticRangeSum.test.cpp
layout: document
redirect_from:
- /verify/Array/StaticRangeSum.test.cpp
- /verify/Array/StaticRangeSum.test.cpp.html
title: Array/StaticRangeSum.test.cpp
---
