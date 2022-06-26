#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/3/GRL_3_A"
#include "Graph/Lowlink.hpp"

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int V, E;
  cin >> V >> E;
  GraphL graph(V);
  for(int i = 0; i < E; ++i) {
    int s, t;
    cin >> s >> t;
    graph.addBidirectionalEdge(s, t);
  }
  auto [aps, bridges] = graph.lowlink();
  for(auto &&ap: aps) {
    cout << ap << '\n';
  }
}