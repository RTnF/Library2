---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Template/SmallTemplate.hpp
    title: Template/SmallTemplate.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: Array/SparseTable.hpp
    title: Array/SparseTable.hpp
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
    }\n"
  code: "#include \"Template/SmallTemplate.hpp\"\n\nint popcount8(unsigned char v)\
    \ {\n  unsigned char x = (v & 0x55) + ((v >> 1) & 0x55);\n  x = (x & 0x33) + ((x\
    \ >> 2) & 0x33);\n  return (x & 0x0f) + ((x >> 4) & 0x0f);\n}\n\nint popcount16(unsigned\
    \ short v) {\n  unsigned short x = (v & 0x5555) + ((v >> 1) & 0x5555);\n  x =\
    \ (x & 0x3333) + ((x >> 2) & 0x3333);\n  x = (x & 0x0f0f) + ((x >> 4) & 0x0f0f);\n\
    \  return (x & 0x00ff) + ((x >> 8) & 0x00ff);\n}\n\nint popcount32(unsigned int\
    \ v) {\n  unsigned int x = (v & 0x55555555) + ((v >> 1) & 0x55555555);\n  x =\
    \ (x & 0x33333333) + ((x >> 2) & 0x33333333);\n  x = (x & 0x0f0f0f0f) + ((x >>\
    \ 4) & 0x0f0f0f0f);\n  x = (x & 0x00ff00ff) + ((x >> 8) & 0x00ff00ff);\n  return\
    \ (x & 0x0000ffff) + ((x >> 16) & 0x0000ffff);\n}\n\nint popcount64(unsigned long\
    \ long v) {\n  unsigned long long x = (v & 0x5555555555555555) + ((v >> 1) & 0x5555555555555555);\n\
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
    }\n"
  dependsOn:
  - Template/SmallTemplate.hpp
  isVerificationFile: false
  path: Utility/BitOperation.hpp
  requiredBy:
  - Array/SparseTable.hpp
  timestamp: '2021-11-28 09:53:00+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Array/StaticRMQ.test.cpp
documentation_of: Utility/BitOperation.hpp
layout: document
redirect_from:
- /library/Utility/BitOperation.hpp
- /library/Utility/BitOperation.hpp.html
title: Utility/BitOperation.hpp
---
