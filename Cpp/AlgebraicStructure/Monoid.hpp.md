---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: Cpp/Template/SmallTemplate.hpp
    title: Cpp/Template/SmallTemplate.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
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
  code: "#pragma once\n#include \"Template/SmallTemplate.hpp\"\n\ntemplate<class T>\n\
    struct MonoidMul {\n  T x;\n  MonoidMul(T x_): x(x_) {}\n  MonoidMul(): MonoidMul(e())\
    \ {}\n  static MonoidMul e() { return 1; }\n  friend MonoidMul op(const MonoidMul\
    \ &a, const MonoidMul &b) { return a.x * b.x; }\n};\n"
  dependsOn:
  - Cpp/Template/SmallTemplate.hpp
  isVerificationFile: false
  path: Cpp/AlgebraicStructure/Monoid.hpp
  requiredBy: []
  timestamp: '2022-06-30 00:19:58+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Cpp/AlgebraicStructure/Monoid.hpp
layout: document
redirect_from:
- /library/Cpp/AlgebraicStructure/Monoid.hpp
- /library/Cpp/AlgebraicStructure/Monoid.hpp.html
title: Cpp/AlgebraicStructure/Monoid.hpp
---
