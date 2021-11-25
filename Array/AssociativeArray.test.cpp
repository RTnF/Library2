#define PROBLEM "https://judge.yosupo.jp/problem/associative_array"
#include "Template/SmallTemplate.hpp"

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  unordered_map<ll, ll> mp;
  int q;
  cin >> q;
  while(q--) {
    int type;
    ll k;
    cin >> type >> k;
    if(type) {
      if(mp.count(k)) {
        cout << mp[k] << '\n';
      } else {
        cout << "0\n";
      }
    } else {
      ll x;
      cin >> x;
      mp[k] = x;
    }
  }
}