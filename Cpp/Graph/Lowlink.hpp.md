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
    path: Cpp/Verify/ArticulationPoints.test.cpp
    title: Cpp/Verify/ArticulationPoints.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/Bridges.test.cpp
    title: Cpp/Verify/Bridges.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links:
    - https://algo-logic.info/articulation-points/
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
    \n\n/**\n * Lowlink \u95A2\u7BC0\u70B9\u30FB\u6A4B\u306E\u5217\u6319\n * \u95A2\
    \u7BC0\u70B9 \u524A\u9664\u3059\u308B\u3068\u9023\u7D50\u6210\u5206\u6570\u304C\
    \u5897\u52A0\u3059\u308B\u9802\u70B9\n * \u6A4B \u524A\u9664\u3059\u308B\u3068\
    \u9023\u7D50\u6210\u5206\u6570\u304C\u5897\u52A0\u3059\u308B\u8FBA\n * \u8FD4\u308A\
    \u5024\uFF1A\u95A2\u7BC0\u70B9, \u6A4B(from, to)\n * O(V + E log E) (Lowlink +\
    \ sort)\n * https://algo-logic.info/articulation-points/\n */\ntemplate<class\
    \ Cost, class E>\npair<vector<int>, vector<pair<int, int>>> GraphL<Cost, E>::lowlink()\
    \ {\n  using P = pair<int, int>;\n  vector<bool> visited(n, false);\n  // ord:\
    \ \u9802\u70B9\u3092\u63A2\u7D22\u3057\u305F\u9806\u756A low: DFS\u6728\u306B\u306A\
    \u3044\u8FBA\u3092\u9AD8\u30051\u56DE\u901A\u3063\u3066\u8E0F\u3081\u308B\u6700\
    \u5C0F\u306Eord\n  vector<int> ord(n, 0), low(n, 0), articulation_points;\n  vector<P>\
    \ bridges;\n  int visit_count = 0;\n\n  auto dfs = [&](auto self, int v, int parent)\
    \ -> void {\n    visited[v] = true;\n    low[v] = ord[v] = visit_count++;\n  \
    \  bool is_articular = false;\n    int child_count = 0;\n    for(auto &e: adj[v])\
    \ {\n      if(!visited[e.to]) {\n        child_count++;\n        self(self, e.to,\
    \ v);\n        low[v] = min(low[v], low[e.to]);\n        if(parent != -1 && ord[v]\
    \ <= low[e.to]) {\n          is_articular = true;\n        }\n        if(ord[v]\
    \ < low[e.to]) {\n          bridges.emplace_back(min(v, e.to), max(v, e.to));\n\
    \        }\n      } else if(e.to != parent) {\n        low[v] = min(low[v], ord[e.to]);\n\
    \      }\n    }\n    if(parent == -1 && child_count >= 2) {\n      is_articular\
    \ = true;\n    }\n    if(is_articular) {\n      articulation_points.emplace_back(v);\n\
    \    }\n  };\n  for(int i = 0; i < n; ++i) {\n    if(!visited[i]) {\n      dfs(dfs,\
    \ i, -1);\n    }\n  }\n  sort(articulation_points.begin(), articulation_points.end());\n\
    \  sort(bridges.begin(), bridges.end());\n  return {articulation_points, bridges};\n\
    }"
  dependsOn:
  - Cpp/Template/SmallTemplate.hpp
  - Cpp/Graph/GraphL.hpp
  isVerificationFile: false
  path: Cpp/Graph/Lowlink.hpp
  requiredBy: []
  timestamp: '2022-06-30 00:19:58+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Cpp/Verify/Bridges.test.cpp
  - Cpp/Verify/ArticulationPoints.test.cpp
documentation_of: Cpp/Graph/Lowlink.hpp
layout: document
redirect_from:
- /library/Cpp/Graph/Lowlink.hpp
- /library/Cpp/Graph/Lowlink.hpp.html
title: Cpp/Graph/Lowlink.hpp
---
