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
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/BellmanFord.test.cpp
    title: Cpp/Graph/BellmanFord.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/Dijkstra.test.cpp
    title: Cpp/Graph/Dijkstra.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/Dijkstra2.test.cpp
    title: Cpp/Graph/Dijkstra2.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Template/SmallTemplate.hpp:\
    \ line -1: no such header\n"
  code: "#pragma once\n#include \"Template/SmallTemplate.hpp\"\n\n// \u8FBA\ntemplate<class\
    \ T>\nclass Edge {\n  static int nextId;\n\npublic:\n  const int from, to, id;\n\
    \  const T cost;\n  Edge(int from_, int to_, T cost_): from(from_), to(to_), id(nextId++),\
    \ cost(cost_) {}\n};\n\ntemplate<class T>\nint Edge<T>::nextId = 0;\n\ntemplate<class\
    \ T>\nostream &operator<<(ostream &os, const Edge<T> &edge) {\n  os << edge.id\
    \ << \": \" << edge.from << \" -> \" << edge.to << \" (\" << edge.cost << \")\"\
    ;\n  return os;\n}\n\n// \u30B0\u30E9\u30D5(\u96A3\u63A5\u30EA\u30B9\u30C8)\n\
    template<class Cost = ll, class E = Edge<Cost>>\nclass GraphL {\n  int n, m;\n\
    \  vector<vector<E>> adj;\n  unordered_map<int, vector<Cost>> shortest_path_dist;\n\
    \  unordered_map<int, vector<int>> shortest_path_parent;\n\npublic:\n  static\
    \ const Cost UNREACHABLE = numeric_limits<Cost>::max();\n  static const Cost NEGATIVE_CYCLE\
    \ = numeric_limits<Cost>::min();\n  GraphL() {}\n  GraphL(int n_): n(n_), m(0),\
    \ adj(n_) {}\n\n  template<class... Args>\n  void add_edge(int from, int to, Args...\
    \ args) {\n    adj[from].emplace_back(from, to, args...);\n    m++;\n  }\n  void\
    \ add_node() {\n    adj.emplace_back();\n    n++;\n  }\n  vector<E> &operator[](int\
    \ i) { return adj[i]; }\n\n  // \u6700\u77ED\u8DDD\u96E2\n  void dijkstra(int\
    \ start_node);\n  void bellmanFord(int start_node);\n  Cost getDist(int from,\
    \ int to) { return shortest_path_dist[from][to]; }\n  vector<int> getShortestPath(int\
    \ from, int to) {\n    vector<int> path;\n    for(int cur = to; cur != -1; cur\
    \ = shortest_path_parent[from][cur]) {\n      path.emplace_back(cur);\n    }\n\
    \    reverse(path.begin(), path.end());\n    return path;\n  }\n\n  template<class\
    \ C_, class E_>\n  friend std::ostream &operator<<(std::ostream &, const GraphL<C_,\
    \ E_> &);\n};\n\ntemplate<class C_, class E_>\nostream &operator<<(ostream &os,\
    \ const GraphL<C_, E_> &graph) {\n  os << \"N = \" << graph.n << \", M = \" <<\
    \ graph.m << '\\n';\n  for(const auto &ev: graph.adj) {\n    for(const auto &e:\
    \ ev) {\n      os << e << '\\n';\n    }\n  }\n  return os;\n}"
  dependsOn:
  - Cpp/Template/SmallTemplate.hpp
  isVerificationFile: false
  path: Cpp/Graph/GraphL.hpp
  requiredBy:
  - Cpp/Graph/BellmanFord.hpp
  - Cpp/Graph/Dijkstra.hpp
  timestamp: '2022-06-13 23:19:48+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Cpp/Graph/Dijkstra2.test.cpp
  - Cpp/Graph/Dijkstra.test.cpp
  - Cpp/Graph/BellmanFord.test.cpp
documentation_of: Cpp/Graph/GraphL.hpp
layout: document
redirect_from:
- /library/Cpp/Graph/GraphL.hpp
- /library/Cpp/Graph/GraphL.hpp.html
title: Cpp/Graph/GraphL.hpp
---
