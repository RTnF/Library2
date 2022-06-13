---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/Dijkstra.hpp
    title: Cpp/Graph/Dijkstra.hpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/GraphL.hpp
    title: Cpp/Graph/GraphL.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/shortest_path
    links:
    - https://judge.yosupo.jp/problem/shortest_path
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Graph/Dijkstra.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/shortest_path\"\n#include\
    \ \"Graph/Dijkstra.hpp\"\n\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n\
    \  int V, E, start, goal;\n  cin >> V >> E >> start >> goal;\n  GraphL graph(V);\n\
    \  for(int i = 0; i < E; ++i) {\n    int s, t, d;\n    cin >> s >> t >> d;\n \
    \   graph.add_edge(s, t, d);\n  }\n  graph.dijkstra(start);\n  ll dist = graph.getDist(start,\
    \ goal);\n  if(dist == GraphL<>::UNREACHABLE) {\n    cout << \"-1\\n\";\n  } else\
    \ {\n    auto ans = graph.getShortestPath(start, goal);\n    int n = (int)ans.size()\
    \ - 1;\n    cout << dist << ' ' << n << '\\n';\n    for(int i = 0; i < n; ++i)\
    \ { cout << ans[i] << ' ' << ans[i + 1] << '\\n'; }\n  }\n}"
  dependsOn:
  - Cpp/Graph/Dijkstra.hpp
  - Cpp/Template/SmallTemplate.hpp
  - Cpp/Graph/GraphL.hpp
  isVerificationFile: true
  path: Cpp/Graph/Dijkstra2.test.cpp
  requiredBy: []
  timestamp: '2022-06-13 20:52:31+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Cpp/Graph/Dijkstra2.test.cpp
layout: document
redirect_from:
- /verify/Cpp/Graph/Dijkstra2.test.cpp
- /verify/Cpp/Graph/Dijkstra2.test.cpp.html
title: Cpp/Graph/Dijkstra2.test.cpp
---
