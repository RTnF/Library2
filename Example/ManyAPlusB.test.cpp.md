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
  bundledCode: "#line 1 \"Example/ManyAPlusB.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/many_aplusb\"\
    \n#line 2 \"Template/SmallTemplate.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\nusing ll = int64_t;\nusing ull = uint64_t;\nusing ld = long double;\n\
    constexpr ll MOD = 1e9 + 7;\nconstexpr ll INF = 1e+18;\nconstexpr ld EPS = 1e-12L;\n\
    constexpr ld PI = 3.14159265358979323846L;\n#line 3 \"Example/ManyAPlusB.test.cpp\"\
    \n\n// tie, sync, endl\u306E\u4E0D\u4F7F\u7528\u306E\u307F\nint main() {\n  cin.tie(0);\n\
    \  ios::sync_with_stdio(false);\n  int t;\n  cin >> t;\n  while(t--){\n    ll\
    \ a, b;\n    cin >> a >> b;\n    cout << a+b << '\\n';\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/many_aplusb\"\n#include\
    \ \"Template/SmallTemplate.hpp\"\n\n// tie, sync, endl\u306E\u4E0D\u4F7F\u7528\
    \u306E\u307F\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n  int\
    \ t;\n  cin >> t;\n  while(t--){\n    ll a, b;\n    cin >> a >> b;\n    cout <<\
    \ a+b << '\\n';\n  }\n}"
  dependsOn:
  - Template/SmallTemplate.hpp
  isVerificationFile: true
  path: Example/ManyAPlusB.test.cpp
  requiredBy: []
  timestamp: '2022-06-10 19:04:49+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Example/ManyAPlusB.test.cpp
layout: document
redirect_from:
- /verify/Example/ManyAPlusB.test.cpp
- /verify/Example/ManyAPlusB.test.cpp.html
title: Example/ManyAPlusB.test.cpp
---
