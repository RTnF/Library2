#define PROBLEM "https://judge.yosupo.jp/problem/associative_array"
#include "Template/SmallTemplate.cpp"

int main() {
  unordered_map<ll, ll> mp;
  int q;
  cin >> q;
  while(q--) {
    int type;
    ll k;
    cin >> type >> k;
    if(type) {
      if(mp.count(k)){
        cout << mp[k] << '\n';
      }else{
        cout << "0\n";
      }
    } else {
      ll x;
      cin >> x;
      mp[k] = x;
    }
  }
}