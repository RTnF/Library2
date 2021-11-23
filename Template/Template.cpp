#pragma region template
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//#include <atcoder/all>
using namespace std;
// using namespace atcoder;
// using cpp_int = boost::multiprecision::cpp_int;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vvvll = vector<vvll>;
using vld = vector<ld>;
using vvld = vector<vld>;
using vvvld = vector<vvld>;
using vs = vector<string>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdd = pair<double, double>;
using pld = pair<ld, ld>;
using vpii = vector<pii>;
using vp = vector<pll>;
using vpdd = vector<pdd>;
using vpld = vector<pld>;
template <typename T> using pqrev = priority_queue<T, vector<T>, greater<T>>;
#define rep(i, n) for(ll i = 0, i##_end = (n); i < i##_end; i++)
#define repb(i, n) for(ll i = (n)-1; i >= 0; i--)
#define repr(i, a, b) for(ll i = (a), i##_end = (b); i < i##_end; i++)
#define reprb(i, a, b) for(ll i = (b)-1, i##_end = (a); i >= i##_end; i--)
#define ALL(a) begin(a), end(a)
#define SZ(x) ((ll)(x).size())
#ifdef OJ_LOCAL
#include "dump.hpp"
#else
#define dump(...) ((void)0)
#endif
constexpr ll INF = 1e+18;
constexpr ld EPS = 1e-12L;
constexpr ld PI = 3.14159265358979323846L;
template <typename T>
constexpr T local([[maybe_unused]] const T &lcl, [[maybe_unused]] const T &oj) {
#ifdef OJ_LOCAL
  return lcl;
#else
  return oj;
#endif
}
template <typename S, typename T> constexpr bool chmax(S &a, const T &b) {
  if(a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <typename S, typename T> constexpr bool chmin(S &a, const T &b) {
  if(b < a) {
    a = b;
    return 1;
  }
  return 0;
}
template <typename T> T max(const vector<T> &x) {
  return *max_element(ALL(x));
}
template <typename T> T min(const vector<T> &x) {
  return *min_element(ALL(x));
}
template <typename T> pair<T, int> argmax(const vector<T> &x) {
  int idx = 0;
  T m = x[0];
  repr(i, 1, SZ(x)) {
    if(chmax(m, x[i]))
      idx = i;
  }
  return {m, idx};
}
template <typename T> pair<T, int> argmin(const vector<T> &x) {
  int idx = 0;
  T m = x[0];
  repr(i, 1, SZ(x)) {
    if(chmin(m, x[i]))
      idx = i;
  }
  return {m, idx};
}
template <typename T> T sum(const vector<T> &x) {
  return accumulate(ALL(x), T(0));
}
// last param -> T
template <typename T> vector<T> makev(size_t a, T b) {
  return vector<T>(a, b);
}
template <typename... Args> auto makev(size_t sz, Args... args) {
  return vector<decltype(makev(args...))>(sz, makev(args...));
}

template <typename T> bool print_(const T &a) {
  cout << a;
  return true;
}
template <typename T> bool print_(const vector<T> &vec) {
  for(auto &a : vec) {
    cout << a;
    if(&a != &vec.back())
      cout << ' ';
  }
  return false;
}
template <typename T> bool print_(const vector<vector<T>> &vv) {
  for(auto &v : vv) {
    for(auto &a : v) {
      cout << a;
      if(&a != &v.back())
        cout << ' ';
    }
    if(&v != &vv.back())
      cout << '\n';
  }
  return false;
}
void print() {
  cout << '\n';
}
template <typename Head, typename... Tail> void print(Head &&head, Tail &&... tail) {
  bool f = print_(head);
  if(sizeof...(tail) != 0)
    cout << (f ? ' ' : '\n');
  print(forward<Tail>(tail)...);
}
#pragma endregion

//*
constexpr ll MOD = 1e9 + 7;
/*/
constexpr ll MOD = 998244353;
//*/

#define PRF(f)                                                                                     \
  do {                                                                                             \
    cout << ((f) ? "Yes" : "No") << '\n';                                                          \
    return;                                                                                        \
  } while(0)
#define PR()                                                                                       \
  do {                                                                                             \
    cout << "-1\n";                                                                                \
    return;                                                                                        \
  } while(0)
//#define PRECISION

void solve() {
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  //*
  solve();
  /*/
  ll _cases;
  cin >> _cases;
  while (_cases--) solve();
  //*/
}
