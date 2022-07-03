---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/BellmanFord.hpp
    title: Cpp/Graph/BellmanFord.hpp
  - icon: ':question:'
    path: Cpp/Graph/GraphL.hpp
    title: Cpp/Graph/GraphL.hpp
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Graph/BellmanFord.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B\"\
    \n#include \"Graph/BellmanFord.hpp\"\n\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n\
    \  int V, E, r;\n  cin >> V >> E >> r;\n  GraphL graph(V);\n  for(int i = 0; i\
    \ < E; ++i) {\n    int s, t, d;\n    cin >> s >> t >> d;\n    graph.addEdge(s,\
    \ t, d);\n  }\n  graph.bellmanFord(r);\n  for(int i = 0; i < V; ++i) {\n    ll\
    \ dist = graph.getDist(r, i);\n    if(dist == GraphL<>::NEGATIVE_CYCLE) {\n  \
    \    cout << \"NEGATIVE CYCLE\\n\";\n      return 0;\n    }\n  }\n  for(int i\
    \ = 0; i < V; ++i) {\n    ll dist = graph.getDist(r, i);\n    if(dist == GraphL<>::UNREACHABLE)\
    \ {\n      cout << \"INF\\n\";\n    } else {\n      cout << dist << '\\n';\n \
    \   }\n  }\n}"
  dependsOn:
  - Cpp/Graph/BellmanFord.hpp
  - Cpp/Template/SmallTemplate.hpp
  - Cpp/Graph/GraphL.hpp
  isVerificationFile: true
  path: Cpp/Verify/BellmanFord.test.cpp
  requiredBy: []
  timestamp: '2022-06-30 00:19:58+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Cpp/Verify/BellmanFord.test.cpp
layout: document
redirect_from:
- /verify/Cpp/Verify/BellmanFord.test.cpp
- /verify/Cpp/Verify/BellmanFord.test.cpp.html
title: Cpp/Verify/BellmanFord.test.cpp
---
