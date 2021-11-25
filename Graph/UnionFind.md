---
title: UnionFind
documentation_of: ./UnionFind.hpp
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