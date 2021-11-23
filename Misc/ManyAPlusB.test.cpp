#define PROBLEM "https://judge.yosupo.jp/problem/many_aplusb"
#include "Template/SmallTemplate.cpp"

int main() {
  int q;
  cin >> q;
  while(q--) {
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long a, b;
    cin >> a >> b;
    cout << a + b << '\n';
  }
}