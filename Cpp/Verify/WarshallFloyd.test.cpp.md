---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/GraphM.hpp
    title: Cpp/Graph/GraphM.hpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/WarshallFloyd.hpp
    title: Cpp/Graph/WarshallFloyd.hpp
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_C
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Graph/WarshallFloyd.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_C\"\
    \n#include \"Graph/WarshallFloyd.hpp\"\n\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n\
    \  int V, E;\n  cin >> V >> E;\n  GraphM g(V);\n  for(int i = 0; i < E; ++i) {\n\
    \    int s, t;\n    ll d;\n    cin >> s >> t >> d;\n    g.addEdge(s, t, d);\n\
    \  }\n  g.warshallFloyd();\n  if(g.hasNegativeCycle()) {\n    cout << \"NEGATIVE\
    \ CYCLE\\n\";\n  } else {\n    for(int i = 0; i < V; ++i) {\n      for(int j =\
    \ 0; j < V; ++j) {\n        if(g.getDist(i, j) >= GraphM<>::UNREACHABLE) {\n \
    \         cout << \"INF\";\n        } else {\n          cout << g.getDist(i, j);\n\
    \        }\n        cout << \" \\n\"[j == V - 1];\n      }\n    }\n  }\n}"
  dependsOn:
  - Cpp/Graph/WarshallFloyd.hpp
  - Cpp/Template/SmallTemplate.hpp
  - Cpp/Graph/GraphM.hpp
  isVerificationFile: true
  path: Cpp/Verify/WarshallFloyd.test.cpp
  requiredBy: []
  timestamp: '2022-06-30 00:19:58+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Cpp/Verify/WarshallFloyd.test.cpp
layout: document
redirect_from:
- /verify/Cpp/Verify/WarshallFloyd.test.cpp
- /verify/Cpp/Verify/WarshallFloyd.test.cpp.html
title: Cpp/Verify/WarshallFloyd.test.cpp
---