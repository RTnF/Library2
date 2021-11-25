#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"
#include "Graph/UnionFind.hpp"

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, q;
  cin >> n >> q;
  UnionFind uf(n);
  while(q--) {
    int type, u, v;
    cin >> type >> u >> v;
    if(type){
      cout << (uf.same(u, v) ? '1' : '0') << '\n';
    }else{
      uf.unite(u, v);
    }
  }
}
