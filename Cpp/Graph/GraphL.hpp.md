---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: Cpp/Template/SmallTemplate.hpp
    title: Cpp/Template/SmallTemplate.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/BellmanFord.hpp
    title: Cpp/Graph/BellmanFord.hpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/Dijkstra.hpp
    title: Cpp/Graph/Dijkstra.hpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/Lowlink.hpp
    title: Cpp/Graph/Lowlink.hpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/Prim.hpp
    title: Cpp/Graph/Prim.hpp
  - icon: ':question:'
    path: Cpp/Graph/TopologicalSort.hpp
    title: Cpp/Graph/TopologicalSort.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/ArticulationPoints.test.cpp
    title: Cpp/Verify/ArticulationPoints.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/BellmanFord.test.cpp
    title: Cpp/Verify/BellmanFord.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/Bridges.test.cpp
    title: Cpp/Verify/Bridges.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/DetectCycleDirected.test.cpp
    title: Cpp/Verify/DetectCycleDirected.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/Dijkstra.test.cpp
    title: Cpp/Verify/Dijkstra.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/Dijkstra2.test.cpp
    title: Cpp/Verify/Dijkstra2.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/Prim.test.cpp
    title: Cpp/Verify/Prim.test.cpp
  - icon: ':x:'
    path: Cpp/VerifyIgnored/TopologicalSort.test.cpp
    title: Cpp/VerifyIgnored/TopologicalSort.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
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
  code: "#pragma once\n#include \"Template/SmallTemplate.hpp\"\n\n// \u8FBA\ntemplate<class\
    \ T>\nclass Edge {\n  static int nextId;\n\npublic:\n  const int from, to, id;\n\
    \  const T cost;\n  Edge(int from_, int to_, T cost_): from(from_), to(to_), id(nextId++),\
    \ cost(cost_) {}\n  Edge(int from_, int to_): from(from_), to(to_), id(nextId++),\
    \ cost(1) {}\n};\n\ntemplate<class T>\nint Edge<T>::nextId = 0;\n\ntemplate<class\
    \ T>\nostream &operator<<(ostream &os, const Edge<T> &edge) {\n  os << edge.id\
    \ << \": \" << edge.from << \" -> \" << edge.to << \" (\" << edge.cost << \")\"\
    ;\n  return os;\n}\n\n// \u30B0\u30E9\u30D5(\u96A3\u63A5\u30EA\u30B9\u30C8)\n\
    template<class Cost = ll, class E = Edge<Cost>>\nclass GraphL {\n  int n, m;\n\
    \  vector<vector<E>> adj;\n  unordered_map<int, vector<Cost>> shortest_path_dist;\n\
    \  unordered_map<int, vector<int>> shortest_path_parent;\n\npublic:\n  static\
    \ const Cost UNREACHABLE = numeric_limits<Cost>::max();\n  static const Cost NEGATIVE_CYCLE\
    \ = numeric_limits<Cost>::min();\n  GraphL() {}\n  GraphL(int n_): n(n_), m(0),\
    \ adj(n_) {}\n\n  void addNode() {\n    adj.emplace_back();\n    n++;\n    resetShortest();\n\
    \  }\n  template<class... Args>\n  void addEdge(int from, int to, Args... args)\
    \ {\n    adj[from].emplace_back(from, to, args...);\n    m++;\n    resetShortest();\n\
    \  }\n  // \u53CC\u65B9\u5411\n  template<class... Args>\n  void addBidirectionalEdge(int\
    \ from, int to, Args... args) {\n    adj[from].emplace_back(from, to, args...);\n\
    \    adj[to].emplace_back(to, from, args...);\n    m += 2;\n    resetShortest();\n\
    \  }\n  void resetShortest() {\n    shortest_path_dist.clear();\n    shortest_path_parent.clear();\n\
    \  }\n  vector<E> &operator[](int i) { return adj[i]; }\n\n  // \u6700\u77ED\u8DDD\
    \u96E2\n  void dijkstra(int start_node);\n  void bellmanFord(int start_node);\n\
    \  Cost getDist(int from, int to) { return shortest_path_dist[from][to]; }\n \
    \ vector<int> getShortestPath(int from, int to) {\n    vector<int> path;\n   \
    \ for(int cur = to; cur != -1; cur = shortest_path_parent[from][cur]) {\n    \
    \  path.emplace_back(cur);\n    }\n    reverse(path.begin(), path.end());\n  \
    \  return path;\n  }\n\n  // \u6700\u5C0F\u5168\u57DF\u68EE\n  Cost prim();\n\n\
    \  // \u95A2\u7BC0\u70B9\u30FB\u6A4B\n  pair<vector<int>, vector<pair<int, int>>>\
    \ lowlink();\n\n  // \u30C8\u30DD\u30ED\u30B8\u30AB\u30EB\u30BD\u30FC\u30C8\n\
    \  vector<int> topologicalSort();\n  vector<int> topologicalSortMinimum();\n\n\
    \  template<class C_, class E_>\n  friend ostream &operator<<(ostream &, const\
    \ GraphL<C_, E_> &);\n};\n\ntemplate<class C_, class E_>\nostream &operator<<(ostream\
    \ &os, const GraphL<C_, E_> &graph) {\n  os << \"N = \" << graph.n << \", M =\
    \ \" << graph.m << '\\n';\n  for(const auto &ev: graph.adj) {\n    for(const auto\
    \ &e: ev) {\n      os << e << '\\n';\n    }\n  }\n  return os;\n}"
  dependsOn:
  - Cpp/Template/SmallTemplate.hpp
  isVerificationFile: false
  path: Cpp/Graph/GraphL.hpp
  requiredBy:
  - Cpp/Graph/TopologicalSort.hpp
  - Cpp/Graph/Lowlink.hpp
  - Cpp/Graph/Dijkstra.hpp
  - Cpp/Graph/BellmanFord.hpp
  - Cpp/Graph/Prim.hpp
  timestamp: '2022-06-30 00:19:58+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - Cpp/VerifyIgnored/TopologicalSort.test.cpp
  - Cpp/Verify/Bridges.test.cpp
  - Cpp/Verify/Dijkstra2.test.cpp
  - Cpp/Verify/BellmanFord.test.cpp
  - Cpp/Verify/DetectCycleDirected.test.cpp
  - Cpp/Verify/Dijkstra.test.cpp
  - Cpp/Verify/ArticulationPoints.test.cpp
  - Cpp/Verify/Prim.test.cpp
documentation_of: Cpp/Graph/GraphL.hpp
layout: document
redirect_from:
- /library/Cpp/Graph/GraphL.hpp
- /library/Cpp/Graph/GraphL.hpp.html
title: Cpp/Graph/GraphL.hpp
---
