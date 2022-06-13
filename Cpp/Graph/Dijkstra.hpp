#pragma once
#include "Template/SmallTemplate.hpp"
#include "Graph/GraphL.hpp"

// ダイクストラ法
// 有向グラフの単一始点最短経路 O((E+V)logV)
// https://algo-logic.info/dijkstra/
template<class Cost, class E>
void GraphL<Cost, E>::dijkstra(int start_node) {
  if(shortest_path_dist.count(start_node)) {
    return;
  }
  using P = pair<Cost, int>;
  vector<Cost> dist(n, numeric_limits<Cost>::max());
  vector<int> parent_v(n, -1);
  dist[start_node] = 0;
  priority_queue<P, vector<P>, greater<P>> pq;
  pq.emplace(0, start_node);
  while(!pq.empty()) {
    P p = pq.top();
    pq.pop();
    Cost v = p.second;
    if(dist[v] < p.first) {
      continue;
    }
    for(const auto &e: adj[v]) {
      if(dist[e.to] > dist[v] + e.cost) {
        dist[e.to] = dist[v] + e.cost;
        parent_v[e.to] = v;
        pq.emplace(dist[e.to], e.to);
      }
    }
  }
  shortest_path_dist[start_node] = move(dist);
  shortest_path_parent[start_node] = move(parent_v);
}