---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Template/SmallTemplate.hpp
    title: Template/SmallTemplate.hpp
  - icon: ':heavy_check_mark:'
    path: Utility/BitOperation.hpp
    title: Utility/BitOperation.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Array/StaticRMQ.test.cpp
    title: Array/StaticRMQ.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"Template/SmallTemplate.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\nusing ll = long long;\nusing ull = unsigned long long;\n\
    using ld = long double;\nconstexpr ll MOD = 1e9 + 7;\nconstexpr ll INF = 1e+18;\n\
    constexpr ld EPS = 1e-12L;\nconstexpr ld PI = 3.14159265358979323846L;\n#line\
    \ 2 \"Utility/BitOperation.hpp\"\n\nint popcount8(unsigned char v) {\n  unsigned\
    \ char x = (v & 0x55) + ((v >> 1) & 0x55);\n  x = (x & 0x33) + ((x >> 2) & 0x33);\n\
    \  return (x & 0x0f) + ((x >> 4) & 0x0f);\n}\n\nint popcount16(unsigned short\
    \ v) {\n  unsigned short x = (v & 0x5555) + ((v >> 1) & 0x5555);\n  x = (x & 0x3333)\
    \ + ((x >> 2) & 0x3333);\n  x = (x & 0x0f0f) + ((x >> 4) & 0x0f0f);\n  return\
    \ (x & 0x00ff) + ((x >> 8) & 0x00ff);\n}\n\nint popcount32(unsigned int v) {\n\
    \  unsigned int x = (v & 0x55555555) + ((v >> 1) & 0x55555555);\n  x = (x & 0x33333333)\
    \ + ((x >> 2) & 0x33333333);\n  x = (x & 0x0f0f0f0f) + ((x >> 4) & 0x0f0f0f0f);\n\
    \  x = (x & 0x00ff00ff) + ((x >> 8) & 0x00ff00ff);\n  return (x & 0x0000ffff)\
    \ + ((x >> 16) & 0x0000ffff);\n}\n\nint popcount64(unsigned long long v) {\n \
    \ unsigned long long x = (v & 0x5555555555555555) + ((v >> 1) & 0x5555555555555555);\n\
    \  x = (x & 0x3333333333333333) + ((x >> 2) & 0x3333333333333333);\n  x = (x &\
    \ 0x0f0f0f0f0f0f0f0f) + ((x >> 4) & 0x0f0f0f0f0f0f0f0f);\n  x = (x & 0x00ff00ff00ff00ff)\
    \ + ((x >> 8) & 0x00ff00ff00ff00ff);\n  x = (x & 0x0000ffff0000ffff) + ((x >>\
    \ 16) & 0x0000ffff0000ffff);\n  return (int)((x & 0x00000000ffffffff) + ((x >>\
    \ 32) & 0x00000000ffffffff));\n}\n\nint msb8(unsigned char v) {\n  assert(v !=\
    \ 0);\n  v |= (v >> 1);\n  v |= (v >> 2);\n  v |= (v >> 4);\n  return popcount8(v)\
    \ - 1;\n}\n\nint msb16(unsigned short v) {\n  assert(v != 0);\n  v |= (v >> 1);\n\
    \  v |= (v >> 2);\n  v |= (v >> 4);\n  v |= (v >> 8);\n  return popcount16(v)\
    \ - 1;\n}\n\nint msb32(unsigned int v) {\n  assert(v != 0);\n  v |= (v >> 1);\n\
    \  v |= (v >> 2);\n  v |= (v >> 4);\n  v |= (v >> 8);\n  v |= (v >> 16);\n  return\
    \ popcount32(v) - 1;\n}\n\nint msb64(unsigned long long v) {\n  assert(v != 0);\n\
    \  v |= (v >> 1);\n  v |= (v >> 2);\n  v |= (v >> 4);\n  v |= (v >> 8);\n  v |=\
    \ (v >> 16);\n  v |= (v >> 32);\n  return popcount64(v) - 1;\n}\n\nint lsb8(unsigned\
    \ char v) {\n  assert(v != 0);\n  v |= (v << 1);\n  v |= (v << 2);\n  v |= (v\
    \ << 4);\n  return 8 - popcount8(v);\n}\n\nint lsb16(unsigned short v) {\n  assert(v\
    \ != 0);\n  v |= (v << 1);\n  v |= (v << 2);\n  v |= (v << 4);\n  v |= (v << 8);\n\
    \  return 16 - popcount16(v);\n}\n\nint lsb32(unsigned v) {\n  assert(v != 0);\n\
    \  v |= (v << 1);\n  v |= (v << 2);\n  v |= (v << 4);\n  v |= (v << 8);\n  v |=\
    \ (v << 16);\n  return 32 - popcount32(v);\n}\n\nint lsb64(unsigned long long\
    \ v) {\n  assert(v != 0);\n  v |= (v << 1);\n  v |= (v << 2);\n  v |= (v << 4);\n\
    \  v |= (v << 8);\n  v |= (v << 16);\n  v |= (v << 32);\n  return 64 - popcount64(v);\n\
    }\n#line 3 \"Array/SparseTable.hpp\"\n\n/**\n * Sparse Table\n * \u69CB\u7BC9\
    \ $O(n \\log n)$\n * \u30AF\u30A8\u30EA $O(1)$\n * \u9077\u79FB\u5F8B $(A \\cdot\
    \ B) \\cdot C = A \\cdot (B \\cdot C)$ \u3068\u51AA\u7B49\u6027 $A \\cdot A =\
    \ A$ \u304C\u5FC5\u8981(max, min, ...)\n * 2\u51AA\u306E\u9818\u57DF\u306B\u5BFE\
    \u3057\u3066\u7DCFmin\u3092\u8A08\u7B97\u3057\u3066\u304A\u304D\u3001\u30AF\u30A8\
    \u30EA\u306B2\u500B\u306E\u9818\u57DF(\u88AB\u308A\u3042\u308A)\u306Emin\u3067\
    \u7B54\u3048\u308B\n */\ntemplate <typename T = ll> class SparseTable {\n  vector<vector<T>>\
    \ st;\n  int n;\n\npublic:\n  // Sparse Table\u306E\u69CB\u7BC9 $O(n \\log n)$\n\
    \  SparseTable(const vector<T> &v) : n(v.size()) {\n    assert(n > 0);\n    st.reserve(32);\n\
    \    st.emplace_back(v);\n    for(int i = 1; n - (1 << i) + 1 > 0; i++) {\n  \
    \    st.emplace_back();\n      st[i].reserve(n - (1 << i) + 1);\n      for(int\
    \ j = 0; j < n - (1 << i) + 1; j++) {\n        st[i].emplace_back(min(st[i - 1][j],\
    \ st[i - 1][j + (1 << (i - 1))]));\n      }\n    }\n  }\n  // [l, r) \u306E\u30AF\
    \u30A8\u30EA $O(1)$ 0 <= l < r <= n\n  T query(int l, int r) {\n    assert(0 <=\
    \ l && l < r && r <= n);\n    int m = r - l;\n    int msb = msb32(m);\n    int\
    \ segment = 1 << msb;\n    return min(st[msb][l], st[msb][r - segment]);\n  }\n\
    };\n"
  code: "#include \"Template/SmallTemplate.hpp\"\n#include \"Utility/BitOperation.hpp\"\
    \n\n/**\n * Sparse Table\n * \u69CB\u7BC9 $O(n \\log n)$\n * \u30AF\u30A8\u30EA\
    \ $O(1)$\n * \u9077\u79FB\u5F8B $(A \\cdot B) \\cdot C = A \\cdot (B \\cdot C)$\
    \ \u3068\u51AA\u7B49\u6027 $A \\cdot A = A$ \u304C\u5FC5\u8981(max, min, ...)\n\
    \ * 2\u51AA\u306E\u9818\u57DF\u306B\u5BFE\u3057\u3066\u7DCFmin\u3092\u8A08\u7B97\
    \u3057\u3066\u304A\u304D\u3001\u30AF\u30A8\u30EA\u306B2\u500B\u306E\u9818\u57DF\
    (\u88AB\u308A\u3042\u308A)\u306Emin\u3067\u7B54\u3048\u308B\n */\ntemplate <typename\
    \ T = ll> class SparseTable {\n  vector<vector<T>> st;\n  int n;\n\npublic:\n\
    \  // Sparse Table\u306E\u69CB\u7BC9 $O(n \\log n)$\n  SparseTable(const vector<T>\
    \ &v) : n(v.size()) {\n    assert(n > 0);\n    st.reserve(32);\n    st.emplace_back(v);\n\
    \    for(int i = 1; n - (1 << i) + 1 > 0; i++) {\n      st.emplace_back();\n \
    \     st[i].reserve(n - (1 << i) + 1);\n      for(int j = 0; j < n - (1 << i)\
    \ + 1; j++) {\n        st[i].emplace_back(min(st[i - 1][j], st[i - 1][j + (1 <<\
    \ (i - 1))]));\n      }\n    }\n  }\n  // [l, r) \u306E\u30AF\u30A8\u30EA $O(1)$\
    \ 0 <= l < r <= n\n  T query(int l, int r) {\n    assert(0 <= l && l < r && r\
    \ <= n);\n    int m = r - l;\n    int msb = msb32(m);\n    int segment = 1 <<\
    \ msb;\n    return min(st[msb][l], st[msb][r - segment]);\n  }\n};\n"
  dependsOn:
  - Template/SmallTemplate.hpp
  - Utility/BitOperation.hpp
  isVerificationFile: false
  path: Array/SparseTable.hpp
  requiredBy: []
  timestamp: '2021-11-28 09:53:00+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Array/StaticRMQ.test.cpp
documentation_of: Array/SparseTable.hpp
layout: document
redirect_from:
- /library/Array/SparseTable.hpp
- /library/Array/SparseTable.hpp.html
title: Array/SparseTable.hpp
---
