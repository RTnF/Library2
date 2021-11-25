#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"
#include "Template/SmallTemplate.hpp"

// based on ACL
struct UnionFind {
  int _n;
  // 根なら-1 * 木の頂点数, 根でなければ親のid
  vector<int> ps;
  int num_groups;
  UnionFind() : _n(0) {
  }
  // 要素数n, 変数0
  UnionFind(int n) : _n(n), ps(n, -1), num_groups(n) {
  }
  // 辺a-bを追加する
  int unite(int a, int b) {
    assert(0 <= a && a < _n);
    assert(0 <= b && b < _n);
    int x = root(a), y = root(b);
    if(x == y) {
      return x;
    }
    if(-ps[x] < -ps[y]) {
      swap(x, y);
    }
    ps[x] += ps[y];
    ps[y] = x;
    num_groups--;
    return x;
  }
  // 連結判定
  bool same(int a, int b) {
    assert(0 <= a && a < _n);
    assert(0 <= b && b < _n);
    return root(a) == root(b);
  }
  int root(int a) {
    assert(0 <= a && a < _n);
    if(ps[a] < 0) {
      return a;
    }
    return ps[a] = root(ps[a]);
  }
  // 連結成分のサイズ
  int size(int a) {
    assert(0 <= a && a < _n);
    return -ps[root(a)];
  }
  // 連結成分数
  int get_num() {
    return num_groups;
  }
  // グループごとに整理 O(n lon n)
  // 未テスト
  vector<vector<int>> groups() {
    vector<int> leader_buf(_n), group_size(_n, 0);
    for(int i = 0; i < _n; i++) {
      leader_buf[i] = root(i);
      group_size[leader_buf[i]]++;
    }
    vector<vector<int>> result(_n);
    for(int i = 0; i < _n; i++) {
      result[i].reserve(group_size[i]);
    }
    for(int i = 0; i < _n; i++) {
      result[leader_buf[i]].emplace_back(i);
    }
    result.erase(
        remove_if(result.begin(), result.end(), [](const vector<int> &v) { return v.empty(); }),
        result.end());
    sort(result.begin(), result.end(),
         [](const vector<int> &a, const vector<int> &b) { return a.size() < b.size(); });
    for(auto &&e : result) {
      sort(e.begin(), e.end());
    }
    return result;
  }
};

