---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Cpp/NumberTheory/IsPrime.hpp
    title: Cpp/NumberTheory/IsPrime.hpp
  - icon: ':question:'
    path: Cpp/Template/SmallTemplate.hpp
    title: Cpp/Template/SmallTemplate.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://yukicoder.me/problems/no/3030
    links:
    - https://yukicoder.me/problems/no/3030
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: NumberTheory/IsPrime.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://yukicoder.me/problems/no/3030\"\n#include \"NumberTheory/IsPrime.hpp\"\
    \n\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n  int n;\n  cin\
    \ >> n;\n  while(n--) {\n    ull x;\n    cin >> x;\n    cout << x << ' ' << isPrime(x)\
    \ << '\\n';\n  }\n}"
  dependsOn:
  - Cpp/NumberTheory/IsPrime.hpp
  - Cpp/Template/SmallTemplate.hpp
  isVerificationFile: true
  path: Cpp/NumberTheory/IsPrime.test.cpp
  requiredBy: []
  timestamp: '2022-06-13 19:17:04+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Cpp/NumberTheory/IsPrime.test.cpp
layout: document
redirect_from:
- /verify/Cpp/NumberTheory/IsPrime.test.cpp
- /verify/Cpp/NumberTheory/IsPrime.test.cpp.html
title: Cpp/NumberTheory/IsPrime.test.cpp
---
