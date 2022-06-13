---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: Cpp/Template/SmallTemplate.hpp
    title: Cpp/Template/SmallTemplate.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://atcoder.jp/contests/agc001/tasks/agc001_a
    links:
    - https://atcoder.jp/contests/agc001/tasks/agc001_a
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Template/SmallTemplate.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://atcoder.jp/contests/agc001/tasks/agc001_a\"\n#include\
    \ \"Template/SmallTemplate.hpp\"\n\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n\
    \  int n;\n  cin >> n;\n  vector<int> l(n * 2);\n  for(int i = 0; i < n * 2; i++)\
    \ {\n    cin >> l[i];\n  }\n  sort(begin(l), end(l));\n  int ans = 0;\n  for(int\
    \ i = 0; i < n * 2; i += 2) {\n    ans += l[i];\n  }\n  cout << ans << '\\n';\n\
    }"
  dependsOn:
  - Cpp/Template/SmallTemplate.hpp
  isVerificationFile: true
  path: Cpp/Example/BBQEasy.test.cpp
  requiredBy: []
  timestamp: '2022-06-13 23:19:48+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Cpp/Example/BBQEasy.test.cpp
layout: document
redirect_from:
- /verify/Cpp/Example/BBQEasy.test.cpp
- /verify/Cpp/Example/BBQEasy.test.cpp.html
title: Cpp/Example/BBQEasy.test.cpp
---
