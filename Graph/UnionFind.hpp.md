---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Template/SmallTemplate.hpp
    title: Template/SmallTemplate.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Graph/UnionFind.test.cpp
    title: Graph/UnionFind.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"Template/SmallTemplate.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\nusing ll = long long;\nusing ull = unsigned long long;\n\
    using ld = long double;\nconstexpr ll MOD = 1e9 + 7;\nconstexpr ll INF = 1e+18;\n\
    constexpr ld EPS = 1e-12L;\nconstexpr ld PI = 3.14159265358979323846L;\n#line\
    \ 2 \"Graph/UnionFind.hpp\"\n\n/**\n * UnionFind\n * \u8FBA\u306E\u8FFD\u52A0\u3068\
    \u9023\u7D50\u5224\u5B9A\u3092\u305D\u308C\u305E\u308C $O(\\alpha (n))$ \u3067\
    \u884C\u3046\u3002\n */\nclass UnionFind {\n  int _n;\n  // \u6839\u306A\u3089\
    -1 * \u6728\u306E\u9802\u70B9\u6570, \u6839\u3067\u306A\u3051\u308C\u3070\u89AA\
    \u306Eid\n  vector<int> ps;\n  int num_groups;\n\npublic:\n  UnionFind() : _n(0)\
    \ {\n  }\n  // \u8981\u7D20\u6570n, \u5909\u65700\n  UnionFind(int n) : _n(n),\
    \ ps(n, -1), num_groups(n) {\n  }\n  // \u8FBAa-b\u3092\u8FFD\u52A0\u3059\u308B\
    \ $O(\\alpha (n))$\n  int unite(int a, int b) {\n    assert(0 <= a && a < _n);\n\
    \    assert(0 <= b && b < _n);\n    int x = root(a), y = root(b);\n    if(x ==\
    \ y) {\n      return x;\n    }\n    if(-ps[x] < -ps[y]) {\n      swap(x, y);\n\
    \    }\n    ps[x] += ps[y];\n    ps[y] = x;\n    num_groups--;\n    return x;\n\
    \  }\n  // \u9023\u7D50\u5224\u5B9A $O(\\alpha (n))$\n  bool same(int a, int b)\
    \ {\n    assert(0 <= a && a < _n);\n    assert(0 <= b && b < _n);\n    return\
    \ root(a) == root(b);\n  }\n  // \u6839\u306Eid\u3092\u8FD4\u3059 $O(\\alpha (n))$\n\
    \  int root(int a) {\n    assert(0 <= a && a < _n);\n    if(ps[a] < 0) {\n   \
    \   return a;\n    }\n    return ps[a] = root(ps[a]);\n  }\n  // \u9023\u7D50\u6210\
    \u5206\u306E\u30B5\u30A4\u30BA $O(\\alpha (n))$\n  int size(int a) {\n    assert(0\
    \ <= a && a < _n);\n    return -ps[root(a)];\n  }\n  // \u9023\u7D50\u6210\u5206\
    \u6570\n  int get_num() {\n    return num_groups;\n  }\n  // \u30B0\u30EB\u30FC\
    \u30D7\u3054\u3068\u306B\u6574\u7406 $O(n \\log n)$\n  // \u672A\u30C6\u30B9\u30C8\
    \n  vector<vector<int>> groups() {\n    vector<int> leader_buf(_n), group_size(_n,\
    \ 0);\n    for(int i = 0; i < _n; i++) {\n      leader_buf[i] = root(i);\n   \
    \   group_size[leader_buf[i]]++;\n    }\n    vector<vector<int>> result(_n);\n\
    \    for(int i = 0; i < _n; i++) {\n      result[i].reserve(group_size[i]);\n\
    \    }\n    for(int i = 0; i < _n; i++) {\n      result[leader_buf[i]].emplace_back(i);\n\
    \    }\n    result.erase(\n        remove_if(result.begin(), result.end(), [](const\
    \ vector<int> &v) { return v.empty(); }),\n        result.end());\n    sort(result.begin(),\
    \ result.end(),\n         [](const vector<int> &a, const vector<int> &b) { return\
    \ a.size() < b.size(); });\n    for(auto &&e : result) {\n      sort(e.begin(),\
    \ e.end());\n    }\n    return result;\n  }\n};\n"
  code: "#include \"Template/SmallTemplate.hpp\"\n\n/**\n * UnionFind\n * \u8FBA\u306E\
    \u8FFD\u52A0\u3068\u9023\u7D50\u5224\u5B9A\u3092\u305D\u308C\u305E\u308C $O(\\\
    alpha (n))$ \u3067\u884C\u3046\u3002\n */\nclass UnionFind {\n  int _n;\n  //\
    \ \u6839\u306A\u3089-1 * \u6728\u306E\u9802\u70B9\u6570, \u6839\u3067\u306A\u3051\
    \u308C\u3070\u89AA\u306Eid\n  vector<int> ps;\n  int num_groups;\n\npublic:\n\
    \  UnionFind() : _n(0) {\n  }\n  // \u8981\u7D20\u6570n, \u5909\u65700\n  UnionFind(int\
    \ n) : _n(n), ps(n, -1), num_groups(n) {\n  }\n  // \u8FBAa-b\u3092\u8FFD\u52A0\
    \u3059\u308B $O(\\alpha (n))$\n  int unite(int a, int b) {\n    assert(0 <= a\
    \ && a < _n);\n    assert(0 <= b && b < _n);\n    int x = root(a), y = root(b);\n\
    \    if(x == y) {\n      return x;\n    }\n    if(-ps[x] < -ps[y]) {\n      swap(x,\
    \ y);\n    }\n    ps[x] += ps[y];\n    ps[y] = x;\n    num_groups--;\n    return\
    \ x;\n  }\n  // \u9023\u7D50\u5224\u5B9A $O(\\alpha (n))$\n  bool same(int a,\
    \ int b) {\n    assert(0 <= a && a < _n);\n    assert(0 <= b && b < _n);\n   \
    \ return root(a) == root(b);\n  }\n  // \u6839\u306Eid\u3092\u8FD4\u3059 $O(\\\
    alpha (n))$\n  int root(int a) {\n    assert(0 <= a && a < _n);\n    if(ps[a]\
    \ < 0) {\n      return a;\n    }\n    return ps[a] = root(ps[a]);\n  }\n  // \u9023\
    \u7D50\u6210\u5206\u306E\u30B5\u30A4\u30BA $O(\\alpha (n))$\n  int size(int a)\
    \ {\n    assert(0 <= a && a < _n);\n    return -ps[root(a)];\n  }\n  // \u9023\
    \u7D50\u6210\u5206\u6570\n  int get_num() {\n    return num_groups;\n  }\n  //\
    \ \u30B0\u30EB\u30FC\u30D7\u3054\u3068\u306B\u6574\u7406 $O(n \\log n)$\n  //\
    \ \u672A\u30C6\u30B9\u30C8\n  vector<vector<int>> groups() {\n    vector<int>\
    \ leader_buf(_n), group_size(_n, 0);\n    for(int i = 0; i < _n; i++) {\n    \
    \  leader_buf[i] = root(i);\n      group_size[leader_buf[i]]++;\n    }\n    vector<vector<int>>\
    \ result(_n);\n    for(int i = 0; i < _n; i++) {\n      result[i].reserve(group_size[i]);\n\
    \    }\n    for(int i = 0; i < _n; i++) {\n      result[leader_buf[i]].emplace_back(i);\n\
    \    }\n    result.erase(\n        remove_if(result.begin(), result.end(), [](const\
    \ vector<int> &v) { return v.empty(); }),\n        result.end());\n    sort(result.begin(),\
    \ result.end(),\n         [](const vector<int> &a, const vector<int> &b) { return\
    \ a.size() < b.size(); });\n    for(auto &&e : result) {\n      sort(e.begin(),\
    \ e.end());\n    }\n    return result;\n  }\n};\n"
  dependsOn:
  - Template/SmallTemplate.hpp
  isVerificationFile: false
  path: Graph/UnionFind.hpp
  requiredBy: []
  timestamp: '2021-11-28 09:53:00+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Graph/UnionFind.test.cpp
documentation_of: Graph/UnionFind.hpp
layout: document
title: UnionFind
---

## 説明

### UnionFind()
頂点数 $0$ のUnionFindを作成する。

### UnionFind(int n)
頂点数 $0$ 、辺数 $0$ のUnionFindを作成する。

### int unite(int a, int b)
辺a-bを追加する。

### bool same(int a, int b)
頂点a-bが連結ならtrueを返す。

### int root(int a)
UnionFind上の頂点aの根を返す。

### int size(int a)
頂点aが属する連結成分のサイズを返す。

### int get_num()
連結成分数を返す。

### vector<vector<int>> groups()
頂点をグループごとに整理して返す。