---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: Cpp/Template/SmallTemplate.hpp
    title: Cpp/Template/SmallTemplate.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/PointAddRangeSum.test.cpp
    title: Cpp/Verify/PointAddRangeSum.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/PointSetRangeComposite.test.cpp
    title: Cpp/Verify/PointSetRangeComposite.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u30A2\u30D5\u30A3\u30F3\u5199\u50CF y = ax + b"
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
    struct GroupSum {\n  T x;\n  GroupSum(T x_): x(x_) {}\n  GroupSum(): GroupSum(e())\
    \ {}\n  static GroupSum e() { return 0; }\n  friend GroupSum op(const GroupSum\
    \ &a, const GroupSum &b) { return a.x + b.x; }\n  GroupSum inv() const { return\
    \ e().x - x; }\n};\n\n/**\n * @brief \u30A2\u30D5\u30A3\u30F3\u5199\u50CF y =\
    \ ax + b\n * @tparam T \n */\ntemplate<class T>\nstruct GroupAffine {\n  T a,\
    \ b;\n  GroupAffine(T a_, T b_): a(a_), b(b_) {}\n  GroupAffine(): GroupAffine(e())\
    \ {}\n  static GroupAffine e() { return {1, 0}; }\n  friend GroupAffine op(const\
    \ GroupAffine &p, const GroupAffine &q) { return {p.a * q.a, p.b * q.a + q.b};\
    \ }\n  GroupAffine inv() const { return {1 / a, -b / a}; }\n};\n"
  dependsOn:
  - Cpp/Template/SmallTemplate.hpp
  isVerificationFile: false
  path: Cpp/AlgebraicStructure/Group.hpp
  requiredBy: []
  timestamp: '2022-07-03 09:53:35+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Cpp/Verify/PointAddRangeSum.test.cpp
  - Cpp/Verify/PointSetRangeComposite.test.cpp
documentation_of: Cpp/AlgebraicStructure/Group.hpp
layout: document
redirect_from:
- /library/Cpp/AlgebraicStructure/Group.hpp
- /library/Cpp/AlgebraicStructure/Group.hpp.html
title: "\u30A2\u30D5\u30A3\u30F3\u5199\u50CF y = ax + b"
---
