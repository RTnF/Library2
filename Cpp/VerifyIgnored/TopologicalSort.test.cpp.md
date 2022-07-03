---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: Cpp/Graph/GraphL.hpp
    title: Cpp/Graph/GraphL.hpp
  - icon: ':question:'
    path: Cpp/Graph/TopologicalSort.hpp
    title: Cpp/Graph/TopologicalSort.hpp
  - icon: ':question:'
    path: Cpp/Template/SmallTemplate.hpp
    title: Cpp/Template/SmallTemplate.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    IGNORE: ''
    IGNORE_IF_GCC: ''
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/4/GRL_4_B
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Graph/TopologicalSort.hpp:\
    \ line -1: no such header\n"
  code: "#define IGNORE\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/4/GRL_4_B\"\
    \n#include \"Graph/TopologicalSort.hpp\"\n\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n\
    \  int V, E;\n  cin >> V >> E;\n  GraphL graph(V);\n  for(int i = 0; i < E; ++i)\
    \ {\n    int s, t;\n    cin >> s >> t;\n    graph.addEdge(s, t);\n  }\n  for(auto\
    \ &e: graph.topologicalSortMinimum()) {\n    cout << e << '\\n';\n  }\n}"
  dependsOn:
  - Cpp/Graph/TopologicalSort.hpp
  - Cpp/Template/SmallTemplate.hpp
  - Cpp/Graph/GraphL.hpp
  isVerificationFile: true
  path: Cpp/VerifyIgnored/TopologicalSort.test.cpp
  requiredBy: []
  timestamp: '2022-06-30 00:19:58+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Cpp/VerifyIgnored/TopologicalSort.test.cpp
layout: document
redirect_from:
- /verify/Cpp/VerifyIgnored/TopologicalSort.test.cpp
- /verify/Cpp/VerifyIgnored/TopologicalSort.test.cpp.html
title: Cpp/VerifyIgnored/TopologicalSort.test.cpp
---
