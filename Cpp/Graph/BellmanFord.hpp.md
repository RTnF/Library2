---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/GraphL.hpp
    title: Cpp/Graph/GraphL.hpp
  - icon: ':question:'
    path: Cpp/Template/SmallTemplate.hpp
    title: Cpp/Template/SmallTemplate.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/BellmanFord.test.cpp
    title: Cpp/Graph/BellmanFord.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links:
    - https://mhrb-minase.hatenablog.com/entry/2019/08/20/003915
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Template/SmallTemplate.hpp:\
    \ line -1: no such header\n"
  code: "#pragma once\n#include \"Template/SmallTemplate.hpp\"\n#include \"Graph/GraphL.hpp\"\
    \n\n/**\n * \u30D9\u30EB\u30DE\u30F3\u30D5\u30A9\u30FC\u30C9\u6CD5\n * \u6709\u5411\
    \u30B0\u30E9\u30D5\u306E\u5358\u4E00\u59CB\u70B9\u6700\u77ED\u7D4C\u8DEF O(EV)\n\
    \ * \u5230\u9054\u4E0D\u80FD\uFF1Amax, \u8CA0\u9589\u8DEF\u3092\u901A\u308B\uFF1A\
    min\n * https://mhrb-minase.hatenablog.com/entry/2019/08/20/003915\n */\ntemplate<class\
    \ Cost, class E>\nvoid GraphL<Cost, E>::bellmanFord(int start_node) {\n  if(shortest_path_dist.count(start_node))\
    \ {\n    return;\n  }\n  vector<Cost> dist(n, GraphL::UNREACHABLE);\n  vector<int>\
    \ parent(n, -1);\n  dist[start_node] = 0;\n  for(int i = 0; i < n - 1; ++i) {\n\
    \    for(auto &es: adj) {\n      for(auto &e: es) {\n        if(dist[e.from] !=\
    \ GraphL::UNREACHABLE && dist[e.from] + e.cost < dist[e.to]) {\n          dist[e.to]\
    \ = dist[e.from] + e.cost;\n          parent[e.to] = e.from;\n        }\n    \
    \  }\n    }\n  }\n  for(int i = 0; i < n; ++i) {\n    for(auto &es: adj) {\n \
    \     for(auto &e: es) {\n        if(dist[e.from] != GraphL::UNREACHABLE && dist[e.from]\
    \ + e.cost < dist[e.to]) {\n          dist[e.to] = GraphL::NEGATIVE_CYCLE;\n \
    \         parent[e.to] = -1;\n        }\n      }\n    }\n  }\n  shortest_path_dist[start_node]\
    \ = move(dist);\n  shortest_path_parent[start_node] = move(parent);\n}"
  dependsOn:
  - Cpp/Template/SmallTemplate.hpp
  - Cpp/Graph/GraphL.hpp
  isVerificationFile: false
  path: Cpp/Graph/BellmanFord.hpp
  requiredBy: []
  timestamp: '2022-06-13 23:19:48+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Cpp/Graph/BellmanFord.test.cpp
documentation_of: Cpp/Graph/BellmanFord.hpp
layout: document
redirect_from:
- /library/Cpp/Graph/BellmanFord.hpp
- /library/Cpp/Graph/BellmanFord.hpp.html
title: Cpp/Graph/BellmanFord.hpp
---
