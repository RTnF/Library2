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
    path: Cpp/Verify/Prim.test.cpp
    title: Cpp/Verify/Prim.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links:
    - https://algo-logic.info/prim-mst/
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
    \n\n/**\n * \u30D7\u30EA\u30E0\u6CD5\n * \u7121\u5411\u30B0\u30E9\u30D5\u306E\u6700\
    \u5C0F\u5168\u57DF\u68EE O((E+V)logV)\n * \u8FBA\u306E\u30B3\u30B9\u30C8\u304C\
    \u5168\u30660\u4EE5\u4E0A\n * \u8FD4\u308A\u5024\uFF1A\u30B3\u30B9\u30C8\u306E\
    \u7DCF\u548C\n * https://algo-logic.info/prim-mst/\n */\ntemplate<class Cost,\
    \ class E>\nCost GraphL<Cost, E>::prim() {\n  Cost mst_dist = 0;\n  using P =\
    \ pair<Cost, int>;\n  vector<Cost> dist(n, GraphL::UNREACHABLE);\n  vector<bool>\
    \ used(n, false);\n  auto span = [&](int start_node) {\n    dist[start_node] =\
    \ 0;\n    priority_queue<P, vector<P>, greater<P>> pq;\n    pq.emplace(0, start_node);\n\
    \    while(!pq.empty()) {\n      P p = pq.top();\n      pq.pop();\n      Cost\
    \ v = p.second;\n      if(used[v] || dist[v] < p.first) {\n        continue;\n\
    \      }\n      mst_dist += dist[v];\n      used[v] = true;\n      for(const auto\
    \ &e: adj[v]) {\n        if(!used[e.to] && e.cost < dist[e.to]) {\n          dist[e.to]\
    \ = e.cost;\n          pq.emplace(dist[e.to], e.to);\n        }\n      }\n   \
    \ }\n  };\n  for(int i = 0; i < n; ++i) {\n    if(!used[i]) {\n      span(i);\n\
    \    }\n  }\n  return mst_dist;\n}"
  dependsOn:
  - Cpp/Template/SmallTemplate.hpp
  - Cpp/Graph/GraphL.hpp
  isVerificationFile: false
  path: Cpp/Graph/Prim.hpp
  requiredBy: []
  timestamp: '2022-06-30 00:19:58+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Cpp/Verify/Prim.test.cpp
documentation_of: Cpp/Graph/Prim.hpp
layout: document
redirect_from:
- /library/Cpp/Graph/Prim.hpp
- /library/Cpp/Graph/Prim.hpp.html
title: Cpp/Graph/Prim.hpp
---
