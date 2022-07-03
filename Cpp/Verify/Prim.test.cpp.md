---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: Cpp/Graph/GraphL.hpp
    title: Cpp/Graph/GraphL.hpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/Prim.hpp
    title: Cpp/Graph/Prim.hpp
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/2/GRL_2_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/2/GRL_2_A
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Graph/Prim.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/2/GRL_2_A\"\
    \n#include \"Graph/Prim.hpp\"\n\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n\
    \  int V, E;\n  cin >> V >> E;\n  GraphL graph(V);\n  for(int i = 0; i < E; ++i)\
    \ {\n    int s, t, d;\n    cin >> s >> t >> d;\n    graph.addBidirectionalEdge(s,\
    \ t, d);\n  }\n  cout << graph.prim() << '\\n';\n}"
  dependsOn:
  - Cpp/Graph/Prim.hpp
  - Cpp/Template/SmallTemplate.hpp
  - Cpp/Graph/GraphL.hpp
  isVerificationFile: true
  path: Cpp/Verify/Prim.test.cpp
  requiredBy: []
  timestamp: '2022-06-30 00:19:58+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Cpp/Verify/Prim.test.cpp
layout: document
redirect_from:
- /verify/Cpp/Verify/Prim.test.cpp
- /verify/Cpp/Verify/Prim.test.cpp.html
title: Cpp/Verify/Prim.test.cpp
---
