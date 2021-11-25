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
    PROBLEM: https://judge.yosupo.jp/problem/associative_array
    links:
    - https://judge.yosupo.jp/problem/associative_array
  bundledCode: "#line 1 \"Array/AssociativeArray.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/associative_array\"\
    \n#line 2 \"Template/SmallTemplate.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\nusing ll = long long;\nusing ull = unsigned long long;\nusing ld = long\
    \ double;\nconstexpr ll MOD = 1e9 + 7;\nconstexpr ll INF = 1e+18;\nconstexpr ld\
    \ EPS = 1e-12L;\nconstexpr ld PI = 3.14159265358979323846L;\n#line 3 \"Array/AssociativeArray.test.cpp\"\
    \n\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n  unordered_map<ll,\
    \ ll> mp;\n  int q;\n  cin >> q;\n  while(q--) {\n    int type;\n    ll k;\n \
    \   cin >> type >> k;\n    if(type) {\n      if(mp.count(k)) {\n        cout <<\
    \ mp[k] << '\\n';\n      } else {\n        cout << \"0\\n\";\n      }\n    } else\
    \ {\n      ll x;\n      cin >> x;\n      mp[k] = x;\n    }\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/associative_array\"\n#include\
    \ \"Template/SmallTemplate.hpp\"\n\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n\
    \  unordered_map<ll, ll> mp;\n  int q;\n  cin >> q;\n  while(q--) {\n    int type;\n\
    \    ll k;\n    cin >> type >> k;\n    if(type) {\n      if(mp.count(k)) {\n \
    \       cout << mp[k] << '\\n';\n      } else {\n        cout << \"0\\n\";\n \
    \     }\n    } else {\n      ll x;\n      cin >> x;\n      mp[k] = x;\n    }\n\
    \  }\n}"
  dependsOn:
  - Template/SmallTemplate.hpp
  isVerificationFile: true
  path: Array/AssociativeArray.test.cpp
  requiredBy: []
  timestamp: '2021-11-25 19:26:23+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Array/AssociativeArray.test.cpp
layout: document
redirect_from:
- /verify/Array/AssociativeArray.test.cpp
- /verify/Array/AssociativeArray.test.cpp.html
title: Array/AssociativeArray.test.cpp
---
