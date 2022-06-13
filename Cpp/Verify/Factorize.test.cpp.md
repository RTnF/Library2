---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Cpp/NumberTheory/Factorize.hpp
    title: Cpp/NumberTheory/Factorize.hpp
  - icon: ':heavy_check_mark:'
    path: Cpp/NumberTheory/IsPrime.hpp
    title: Cpp/NumberTheory/IsPrime.hpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Template/SmallTemplate.hpp
    title: Cpp/Template/SmallTemplate.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: NumberTheory/Factorize.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A\"\
    \n#include \"NumberTheory/Factorize.hpp\"\n\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n\
    \  ull n;\n  cin >> n;\n  auto f = factorize(n);\n  cout << n << ':';\n  for(auto\
    \ p: f) {\n    cout << ' ' << p;\n  }\n  cout << '\\n';\n}"
  dependsOn:
  - Cpp/NumberTheory/Factorize.hpp
  - Cpp/Template/SmallTemplate.hpp
  - Cpp/NumberTheory/IsPrime.hpp
  isVerificationFile: true
  path: Cpp/Verify/Factorize.test.cpp
  requiredBy: []
  timestamp: '2022-06-13 23:34:54+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Cpp/Verify/Factorize.test.cpp
layout: document
redirect_from:
- /verify/Cpp/Verify/Factorize.test.cpp
- /verify/Cpp/Verify/Factorize.test.cpp.html
title: Cpp/Verify/Factorize.test.cpp
---
