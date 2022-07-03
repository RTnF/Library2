---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: Cpp/Graph/GraphL.hpp
    title: Cpp/Graph/GraphL.hpp
  - icon: ':question:'
    path: Cpp/Template/SmallTemplate.hpp
    title: Cpp/Template/SmallTemplate.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/Dijkstra.test.cpp
    title: Cpp/Verify/Dijkstra.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/Dijkstra2.test.cpp
    title: Cpp/Verify/Dijkstra2.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links:
    - https://algo-logic.info/dijkstra/
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Template/SmallTemplate.hpp:\
    \ line -1: no such header\n"
  code: "#pragma once\n#include \"Template/SmallTemplate.hpp\"\n#include \"Graph/GraphL.hpp\"\
    \n\n/**\n * \u30C0\u30A4\u30AF\u30B9\u30C8\u30E9\u6CD5\n * \u6709\u5411\u30B0\u30E9\
    \u30D5\u306E\u5358\u4E00\u59CB\u70B9\u6700\u77ED\u7D4C\u8DEF O((E+V)logV)\n *\
    \ \u8FBA\u306E\u30B3\u30B9\u30C8\u304C\u5168\u30660\u4EE5\u4E0A\n * \u5230\u9054\
    \u4E0D\u80FD\uFF1Amax\n * https://algo-logic.info/dijkstra/\n */\ntemplate<class\
    \ Cost, class E>\nvoid GraphL<Cost, E>::dijkstra(int start_node) {\n  if(shortest_path_dist.count(start_node))\
    \ {\n    return;\n  }\n  using P = pair<Cost, int>;\n  vector<Cost> dist(n, GraphL::UNREACHABLE);\n\
    \  vector<int> parent(n, -1);\n  dist[start_node] = 0;\n  priority_queue<P, vector<P>,\
    \ greater<P>> pq;\n  pq.emplace(0, start_node);\n  while(!pq.empty()) {\n    P\
    \ p = pq.top();\n    pq.pop();\n    Cost v = p.second;\n    if(dist[v] < p.first)\
    \ {\n      continue;\n    }\n    for(const auto &e: adj[v]) {\n      if(dist[v]\
    \ + e.cost < dist[e.to]) {\n        dist[e.to] = dist[v] + e.cost;\n        parent[e.to]\
    \ = v;\n        pq.emplace(dist[e.to], e.to);\n      }\n    }\n  }\n  shortest_path_dist[start_node]\
    \ = move(dist);\n  shortest_path_parent[start_node] = move(parent);\n}"
  dependsOn:
  - Cpp/Template/SmallTemplate.hpp
  - Cpp/Graph/GraphL.hpp
  isVerificationFile: false
  path: Cpp/Graph/Dijkstra.hpp
  requiredBy: []
  timestamp: '2022-06-30 00:19:58+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Cpp/Verify/Dijkstra2.test.cpp
  - Cpp/Verify/Dijkstra.test.cpp
documentation_of: Cpp/Graph/Dijkstra.hpp
layout: document
redirect_from:
- /library/Cpp/Graph/Dijkstra.hpp
- /library/Cpp/Graph/Dijkstra.hpp.html
title: Cpp/Graph/Dijkstra.hpp
---
