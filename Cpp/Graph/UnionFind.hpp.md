---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: Cpp/Template/SmallTemplate.hpp
    title: Cpp/Template/SmallTemplate.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/UnionFind.test.cpp
    title: Cpp/Verify/UnionFind.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
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
  code: "#pragma once\n#include \"Template/SmallTemplate.hpp\"\n\n// based on ACL\n\
    class UnionFind {\n  int _n;\n  // root: -1 * \u9023\u7D50\u6210\u5206\u30B5\u30A4\
    \u30BA\n  // otherwise: parent\n  vector<int> ps;\n  int num_groups;\n\npublic:\n\
    \  UnionFind(int n): _n(n), ps(n, -1), num_groups(n) {}\n\n  int unite(int a,\
    \ int b) {\n    int x = root(a), y = root(b);\n    if(x == y) {\n      return\
    \ x;\n    }\n    if(-ps[x] < -ps[y]) {\n      swap(x, y);\n    }\n    ps[x] +=\
    \ ps[y];\n    ps[y] = x;\n    num_groups--;\n    return x;\n  }\n  bool same(int\
    \ a, int b) { return root(a) == root(b); }\n  int root(int a) {\n    if(ps[a]\
    \ < 0) {\n      return a;\n    }\n    return ps[a] = root(ps[a]);\n  }\n  int\
    \ size(int a) { return -ps[root(a)]; }\n  int getNum() { return num_groups; }\n\
    };"
  dependsOn:
  - Cpp/Template/SmallTemplate.hpp
  isVerificationFile: false
  path: Cpp/Graph/UnionFind.hpp
  requiredBy: []
  timestamp: '2022-06-30 00:19:58+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Cpp/Verify/UnionFind.test.cpp
documentation_of: Cpp/Graph/UnionFind.hpp
layout: document
redirect_from:
- /library/Cpp/Graph/UnionFind.hpp
- /library/Cpp/Graph/UnionFind.hpp.html
title: Cpp/Graph/UnionFind.hpp
---
