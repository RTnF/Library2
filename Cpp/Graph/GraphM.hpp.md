---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: Cpp/Template/SmallTemplate.hpp
    title: Cpp/Template/SmallTemplate.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/WarshallFloyd.hpp
    title: Cpp/Graph/WarshallFloyd.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/WarshallFloyd.test.cpp
    title: Cpp/Verify/WarshallFloyd.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
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
  code: "#pragma once\n#include \"Template/SmallTemplate.hpp\"\n\n// \u30B0\u30E9\u30D5\
    (\u96A3\u63A5\u884C\u5217)\ntemplate<class Cost = ll>\nclass GraphM {\n  int n,\
    \ m;\n  vector<vector<Cost>> mat;\n  vector<vector<Cost>> shortest_path_dist;\n\
    \  vector<vector<int>> shortest_path_parent;\n  bool has_negative_cycle = false;\n\
    \npublic:\n  static const Cost UNREACHABLE = numeric_limits<Cost>::max() >> 2;\n\
    \n  GraphM(int n_): n(n_), m(0), mat(n_, vector<Cost>(n_, GraphM::UNREACHABLE))\
    \ {\n    for(int i = 0; i < n; ++i) {\n      mat[i][i] = 0;\n    }\n  }\n\n  void\
    \ addEdge(int from, int to, Cost cost = 1) {\n    mat[from][to] = cost;\n    m++;\n\
    \  }\n\n  // \u6700\u77ED\u8DDD\u96E2\n  void warshallFloyd();\n  Cost getDist(int\
    \ from, int to) { return shortest_path_dist[from][to]; }\n  vector<int> getShortestPath(int\
    \ from, int to) {\n    vector<int> path;\n    for(int cur = to; cur != from; cur\
    \ = shortest_path_parent[from][cur]) {\n      path.emplace_back(cur);\n      if(cur\
    \ == -1) {\n        return vector<int>();\n      }\n    }\n    path.emplace_back(from);\n\
    \    reverse(path.begin(), path.end());\n    return path;\n  }\n  bool hasNegativeCycle()\
    \ const { return has_negative_cycle; }\n\n  template<class T>\n  friend std::ostream\
    \ &operator<<(std::ostream &, const GraphM<T> &);\n};\n\ntemplate<class T>\nostream\
    \ &operator<<(ostream &os, const GraphM<T> &graph) {\n  os << \"N = \" << graph.n\
    \ << \", M = \" << graph.m << '\\n';\n  for(int i = 0; i < graph.n; ++i) {\n \
    \   for(int j = 0; j < graph.n; ++j) {\n      os << graph.mat[i][j] << \" \\n\"\
    [j == graph.n - 1];\n    }\n  }\n  return os;\n}"
  dependsOn:
  - Cpp/Template/SmallTemplate.hpp
  isVerificationFile: false
  path: Cpp/Graph/GraphM.hpp
  requiredBy:
  - Cpp/Graph/WarshallFloyd.hpp
  timestamp: '2022-06-30 00:19:58+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Cpp/Verify/WarshallFloyd.test.cpp
documentation_of: Cpp/Graph/GraphM.hpp
layout: document
redirect_from:
- /library/Cpp/Graph/GraphM.hpp
- /library/Cpp/Graph/GraphM.hpp.html
title: Cpp/Graph/GraphM.hpp
---
