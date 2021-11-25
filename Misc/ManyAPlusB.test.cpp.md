---
data:
  _extendedDependsOn:
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
    PROBLEM: https://judge.yosupo.jp/problem/many_aplusb
    links:
    - https://judge.yosupo.jp/problem/many_aplusb
  bundledCode: "#line 1 \"Misc/ManyAPlusB.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/many_aplusb\"\
    \n#line 2 \"Template/SmallTemplate.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\nusing ll = long long;\nusing ull = unsigned long long;\nusing ld = long\
    \ double;\nconstexpr ll MOD = 1e9 + 7;\nconstexpr ll INF = 1e+18;\nconstexpr ld\
    \ EPS = 1e-12L;\nconstexpr ld PI = 3.14159265358979323846L;\n#line 3 \"Misc/ManyAPlusB.test.cpp\"\
    \n\nint main() {\n  int q;\n  cin >> q;\n  while(q--) {\n    cin.tie(0);\n   \
    \ ios::sync_with_stdio(false);\n    long long a, b;\n    cin >> a >> b;\n    cout\
    \ << a + b << '\\n';\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/many_aplusb\"\n#include\
    \ \"Template/SmallTemplate.hpp\"\n\nint main() {\n  int q;\n  cin >> q;\n  while(q--)\
    \ {\n    cin.tie(0);\n    ios::sync_with_stdio(false);\n    long long a, b;\n\
    \    cin >> a >> b;\n    cout << a + b << '\\n';\n  }\n}"
  dependsOn:
  - Template/SmallTemplate.hpp
  isVerificationFile: true
  path: Misc/ManyAPlusB.test.cpp
  requiredBy: []
  timestamp: '2021-11-25 19:26:23+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Misc/ManyAPlusB.test.cpp
layout: document
redirect_from:
- /verify/Misc/ManyAPlusB.test.cpp
- /verify/Misc/ManyAPlusB.test.cpp.html
title: Misc/ManyAPlusB.test.cpp
---
