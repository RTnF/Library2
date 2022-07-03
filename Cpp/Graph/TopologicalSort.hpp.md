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
    path: Cpp/Verify/DetectCycleDirected.test.cpp
    title: Cpp/Verify/DetectCycleDirected.test.cpp
  - icon: ':x:'
    path: Cpp/VerifyIgnored/TopologicalSort.test.cpp
    title: Cpp/VerifyIgnored/TopologicalSort.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    links:
    - "https://ja.wikipedia.org/wiki/\u30C8\u30DD\u30ED\u30B8\u30AB\u30EB\u30BD\u30FC\
      \u30C8"
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
    \n\n/**\n * \u30C8\u30DD\u30ED\u30B8\u30AB\u30EB\u30BD\u30FC\u30C8(Kahn) O(E +\
    \ V)\n * \u8FD4\u308A\u5024\uFF1ADAG\u306E\u5834\u5408\u6839\u304B\u3089\u9806\
    \u3001\u975EDAG\u306E\u5834\u5408\u7A7A\n * https://ja.wikipedia.org/wiki/\u30C8\
    \u30DD\u30ED\u30B8\u30AB\u30EB\u30BD\u30FC\u30C8\n */\ntemplate<class Cost, class\
    \ E>\nvector<int> GraphL<Cost, E>::topologicalSort() {\n  vector<int> sorted_node,\
    \ in_count(n, 0);\n  vector<bool> visited(n, false);\n  sorted_node.reserve(n);\n\
    \  stack<int> st;\n  for(auto &es: adj) {\n    for(auto &e: es) {\n      in_count[e.to]++;\n\
    \    }\n  }\n  for(int i = 0; i < n; ++i) {\n    if(in_count[i] == 0) {\n    \
    \  st.emplace(i);\n    }\n  }\n  while(!st.empty()) {\n    int v = st.top();\n\
    \    st.pop();\n    visited[v] = true;\n    sorted_node.emplace_back(v);\n   \
    \ for(auto &e: adj[v]) {\n      if(--in_count[e.to] == 0) {\n        st.emplace(e.to);\n\
    \      }\n    }\n  }\n  if(sorted_node.size() != n) {\n    return vector<int>();\n\
    \  }\n  return sorted_node;\n}\n\n/**\n * \u30C8\u30DD\u30ED\u30B8\u30AB\u30EB\
    \u30BD\u30FC\u30C8(Kahn)\n * \u8F9E\u66F8\u9806\u6700\u5C0FO(E + V log V)\n */\n\
    template<class Cost, class E>\nvector<int> GraphL<Cost, E>::topologicalSortMinimum()\
    \ {\n  vector<int> sorted_node, in_count(n, 0);\n  vector<bool> visited(n, false);\n\
    \  sorted_node.reserve(n);\n  priority_queue<int, vector<int>, greater<int>> pq;\n\
    \  for(auto &es: adj) {\n    for(auto &e: es) {\n      in_count[e.to]++;\n   \
    \ }\n  }\n  for(int i = 0; i < n; ++i) {\n    if(in_count[i] == 0) {\n      pq.emplace(i);\n\
    \    }\n  }\n  while(!pq.empty()) {\n    int v = pq.top();\n    pq.pop();\n  \
    \  visited[v] = true;\n    sorted_node.emplace_back(v);\n    for(auto &e: adj[v])\
    \ {\n      if(--in_count[e.to] == 0) {\n        pq.emplace(e.to);\n      }\n \
    \   }\n  }\n  if(sorted_node.size() != n) {\n    return vector<int>();\n  }\n\
    \  return sorted_node;\n}"
  dependsOn:
  - Cpp/Template/SmallTemplate.hpp
  - Cpp/Graph/GraphL.hpp
  isVerificationFile: false
  path: Cpp/Graph/TopologicalSort.hpp
  requiredBy: []
  timestamp: '2022-06-30 00:19:58+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - Cpp/VerifyIgnored/TopologicalSort.test.cpp
  - Cpp/Verify/DetectCycleDirected.test.cpp
documentation_of: Cpp/Graph/TopologicalSort.hpp
layout: document
redirect_from:
- /library/Cpp/Graph/TopologicalSort.hpp
- /library/Cpp/Graph/TopologicalSort.hpp.html
title: Cpp/Graph/TopologicalSort.hpp
---
