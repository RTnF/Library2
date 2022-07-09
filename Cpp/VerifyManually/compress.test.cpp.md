---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: Cpp/Array/SortUtil.hpp
    title: "\u9006\u7F6E\u63DB"
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
    IGNORE: ''
    IGNORE_IF_GCC: ''
    links:
    - https://atcoder.jp/contests/abc036/tasks/abc036_c
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Array/SortUtil.hpp:\
    \ line -1: no such header\n"
  code: "#define IGNORE\n#define PROBLEM \"https://atcoder.jp/contests/abc036/tasks/abc036_c\"\
    \n#include \"Array/SortUtil.hpp\"\n\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n\
    \  \n}"
  dependsOn:
  - Cpp/Array/SortUtil.hpp
  - Cpp/Template/SmallTemplate.hpp
  isVerificationFile: true
  path: Cpp/VerifyManually/compress.test.cpp
  requiredBy: []
  timestamp: '2022-07-09 21:37:27+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Cpp/VerifyManually/compress.test.cpp
layout: document
redirect_from:
- /verify/Cpp/VerifyManually/compress.test.cpp
- /verify/Cpp/VerifyManually/compress.test.cpp.html
title: Cpp/VerifyManually/compress.test.cpp
---
