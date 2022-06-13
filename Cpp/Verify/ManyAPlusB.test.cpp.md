---
data:
  _extendedDependsOn:
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
    PROBLEM: https://judge.yosupo.jp/problem/many_aplusb
    links:
    - https://judge.yosupo.jp/problem/many_aplusb
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Template/SmallTemplate.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/many_aplusb\"\n#include\
    \ \"Template/SmallTemplate.hpp\"\n\n// tie, sync, endl\u306E\u4E0D\u4F7F\u7528\
    \u306E\u307F\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n  int\
    \ t;\n  cin >> t;\n  while(t--) {\n    ll a, b;\n    cin >> a >> b;\n    cout\
    \ << a + b << '\\n';\n  }\n}"
  dependsOn:
  - Cpp/Template/SmallTemplate.hpp
  isVerificationFile: true
  path: Cpp/Verify/ManyAPlusB.test.cpp
  requiredBy: []
  timestamp: '2022-06-13 23:34:54+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Cpp/Verify/ManyAPlusB.test.cpp
layout: document
redirect_from:
- /verify/Cpp/Verify/ManyAPlusB.test.cpp
- /verify/Cpp/Verify/ManyAPlusB.test.cpp.html
title: Cpp/Verify/ManyAPlusB.test.cpp
---
