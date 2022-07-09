---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: Cpp/Template/SmallTemplate.hpp
    title: Cpp/Template/SmallTemplate.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: Cpp/VerifyManually/compress.test.cpp
    title: Cpp/VerifyManually/compress.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    document_title: "\u9006\u7F6E\u63DB"
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
  code: "#pragma once\n#include \"Template/SmallTemplate.hpp\"\n\n/**\n * @brief \u9006\
    \u7F6E\u63DB\n * \u4F8B\uFF1A[2, 4, 0, 1, 3] -> [2, 3, 0, 4, 1]\n * @param v 0-indexed\
    \ \u9806\u5217\n */\ntemplate<class T>\nvector<int> invPerm(const vector<T> &v)\
    \ {\n  int n = v.size();\n  vector<int> inv(n, -1);\n  for(int i = 0; i < n; i++)\
    \ {\n    assert(0 <= v[i] && v[i] < n);\n    assert(inv[v[i]] == -1);\n    inv[v[i]]\
    \ = i;\n  }\n  return inv;\n}\n\n/**\n * @brief \u30BD\u30FC\u30C8\u7D50\u679C\
    \u3092\u914D\u5217\u306Eindex\u3067\u5F97\u308B O(n log n)\n * \u4F8B\uFF1A[3(0),\
    \ 3(1), 1(2), 5(3), 2(4)] -> [1(2), 2(4), 3(0), 3(1), 5(3)] -> [2, 4, 0, 1, 3]\n\
    \ */\ntemplate<class T>\nvector<int> argSort(const vector<T> &v) {\n  vector<int>\
    \ arg(v.size());\n  iota(arg.begin(), arg.end(), 0);\n  stable_sort(arg.begin(),\
    \ arg.end(), [&](int a, int b) { return v[a] < v[b]; });\n  return arg;\n}\n\n\
    /**\n * @brief \u30BD\u30FC\u30C8\u3067index\u304C\u3069\u3053\u306B\u79FB\u52D5\
    \u3059\u308B\u304B O(n log n)\n * \u4F8B\uFF1A[3, 3, 1, 5, 2] -> [2, 3, 0, 4,\
    \ 1]\n */\ntemplate<class T>\nvector<int> invArgSort(const vector<T> &v) {\n \
    \ return invPerm(argSort(v));\n}\n\n/**\n * @brief \u5EA7\u6A19\u5727\u7E2E O(n\
    \ log n)\n * \u4F8B\uFF1A[3, 3, 1, 5, 2] -> [2, 2, 0, 3, 1] + offset\n * unzip:\
    \ [1, 2, 3, 5]\n */\ntemplate<typename T>\nvector<T> compress(const vector<T>\
    \ &x, vector<T> &unzip, int offset = 0) {\n  int n = x.size();\n  vector<T> cmp(n);\n\
    \  unzip = x;\n  sort(unzip.begin(), unzip.end());\n  unzip.erase(unique(unzip.begin(),\
    \ unzip.end()), unzip.end());\n  for(int i = 0; i < n; i++) {\n    cmp[i] = lower_bound(unzip.begin(),\
    \ unzip.end(), x[i]) - unzip.begin() + offset;\n  }\n  return cmp;\n}\n\n/**\n\
    \ * @brief \u5EA7\u6A19\u5727\u7E2E O(n log n)\n * \u4F8B\uFF1A[3, 3, 1, 5, 2]\
    \ -> [2, 2, 0, 3, 1] + offset\n */\ntemplate<typename T>\nvector<T> compress(const\
    \ vector<T> &x, int offset = 0) {\n  vector<T> y = x;\n  return compress(x, y,\
    \ offset);\n}"
  dependsOn:
  - Cpp/Template/SmallTemplate.hpp
  isVerificationFile: false
  path: Cpp/Array/SortUtil.hpp
  requiredBy: []
  timestamp: '2022-07-09 21:37:27+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - Cpp/VerifyManually/compress.test.cpp
documentation_of: Cpp/Array/SortUtil.hpp
layout: document
redirect_from:
- /library/Cpp/Array/SortUtil.hpp
- /library/Cpp/Array/SortUtil.hpp.html
title: "\u9006\u7F6E\u63DB"
---
