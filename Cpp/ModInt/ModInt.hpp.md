---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: Cpp/Template/SmallTemplate.hpp
    title: Cpp/Template/SmallTemplate.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/PointSetRangeComposite.test.cpp
    title: Cpp/Verify/PointSetRangeComposite.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u5270\u4F59\u3092\u53D6\u308A[0, mod)\u306B\u53CE\u3081\u308B\
      int"
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
  code: "#pragma once\n#include \"Template/SmallTemplate.hpp\"\n\n/**\n * @brief \u5270\
    \u4F59\u3092\u53D6\u308A[0, mod)\u306B\u53CE\u3081\u308Bint\n * based on ACL\n\
    \ * @tparam mod \u7D20\u6570\u306B\u9650\u308B\n */\ntemplate<uint32_t mod, enable_if_t<(2\
    \ <= mod)> * = nullptr>\nclass ModInt {\n  uint32_t x;\n\npublic:\n  ModInt():\
    \ x(0) {}\n  template<class T, enable_if_t<is_signed_v<T>> * = nullptr>\n  ModInt(T\
    \ x_): x(x_ < 0 ? x_ % (ll)mod + (ll)mod : x_ % (ll)mod) {}\n  template<class\
    \ U, enable_if_t<!is_signed_v<U>> * = nullptr>\n  ModInt(U x_): x(x_ % mod) {}\n\
    \n  uint32_t get() const { return x; }\n  template<class T, enable_if_t<is_signed_v<T>>\
    \ * = nullptr>\n  void set(T x_) {\n    x = x_ < 0 ? x_ % (ll)mod + (ll)mod :\
    \ x_ % (ll)mod;\n  }\n  template<class U, enable_if_t<!is_signed_v<U>> * = nullptr>\n\
    \  void set(U x_) {\n    x = x_ % mod;\n  }\n\n  ModInt operator++(int) {\n  \
    \  ModInt y = *this;\n    ++*this;\n    return y;\n  }\n  ModInt &operator++()\
    \ {\n    x = x == mod - 1 ? 0u : x + 1;\n    return *this;\n  }\n  ModInt operator--(int)\
    \ {\n    ModInt y = *this;\n    --*this;\n    return y;\n  }\n  ModInt &operator--()\
    \ {\n    x = x == 0u ? mod - 1 : x - 1;\n    return *this;\n  }\n  ModInt &operator+=(const\
    \ ModInt &y) {\n    x += y.x;\n    if(x >= mod) {\n      x -= mod;\n    }\n  \
    \  return *this;\n  }\n  ModInt &operator-=(const ModInt &y) {\n    x -= y.x;\n\
    \    if(x >= mod) {\n      x += mod;\n    }\n    return *this;\n  }\n  ModInt\
    \ &operator*=(const ModInt &y) {\n    x = (ull)x * (ull)y.x % mod;\n    return\
    \ *this;\n  }\n  ModInt &operator/=(const ModInt &y) { return *this *= y.inv();\
    \ }\n  ModInt operator+() const { return *this; }\n  ModInt operator-() const\
    \ { return ModInt(mod - x); }\n\n  ModInt pow(ll n) const {\n    if(n < 0) {\n\
    \      return pow(-n).inv();\n    }\n    ModInt y = *this, r = 1;\n    while(n)\
    \ {\n      if(n & 1) {\n        r *= y;\n      }\n      y *= y;\n      n >>= 1;\n\
    \    }\n    return r;\n  }\n  ModInt inv() const {\n    assert(x);\n    return\
    \ pow(mod - 2);\n  }\n\n  friend ModInt operator+(const ModInt &a, const ModInt\
    \ &b) { return ModInt(a) += b; }\n  friend ModInt operator-(const ModInt &a, const\
    \ ModInt &b) { return ModInt(a) -= b; }\n  friend ModInt operator*(const ModInt\
    \ &a, const ModInt &b) { return ModInt(a) *= b; }\n  friend ModInt operator/(const\
    \ ModInt &a, const ModInt &b) { return ModInt(a) /= b; }\n  friend bool operator==(const\
    \ ModInt &a, const ModInt &b) { return a.x == b.x; }\n  friend bool operator!=(const\
    \ ModInt &a, const ModInt &b) { return a.x != b.x; }\n\n  friend istream &operator>>(istream\
    \ &is, ModInt &m) {\n    ll y;\n    is >> y;\n    m.set(y);\n    return is;\n\
    \  }\n  friend ostream &operator<<(ostream &os, const ModInt &m) {\n    os <<\
    \ m.x;\n    return os;\n  }\n};\n\nusing mint = ModInt<998244353u>;\nusing mint1\
    \ = ModInt<1000000007u>;"
  dependsOn:
  - Cpp/Template/SmallTemplate.hpp
  isVerificationFile: false
  path: Cpp/ModInt/ModInt.hpp
  requiredBy: []
  timestamp: '2022-06-30 00:19:58+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Cpp/Verify/PointSetRangeComposite.test.cpp
documentation_of: Cpp/ModInt/ModInt.hpp
layout: document
redirect_from:
- /library/Cpp/ModInt/ModInt.hpp
- /library/Cpp/ModInt/ModInt.hpp.html
title: "\u5270\u4F59\u3092\u53D6\u308A[0, mod)\u306B\u53CE\u3081\u308Bint"
---
