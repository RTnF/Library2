#pragma region template
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vd = vector<double>;
using vvd = vector<vd>;
using vvvd = vector<vvd>;
using pii = pair<int, int>;
using vpii = vector<pii>;
using vs = vector<string>;
template<typename T>
using pqrev = priority_queue<T, vector<T>, greater<T>>;
#define rep(i, n) for(int i = 0, i##_end = (n); i < i##_end; i++)
#define repb(i, n) for(int i = (n)-1; i >= 0; i--)
#define repr(i, a, b) for(int i = (a), i##_end = (b); i < i##_end; i++)
#define reprb(i, a, b) for(int i = (b)-1, i##_end = (a); i >= i##_end; i--)
#define ALL(a) (a).begin(), (a).end()
#define SZ(x) ((int)(x).size())
constexpr int INF = 1e9;
constexpr double EPS = 1e-12;
template<typename S, typename T>
inline bool chmax(S &a, const T &b) {
  if(a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template<typename S, typename T>
inline bool chmin(S &a, const T &b) {
  if(b < a) {
    a = b;
    return 1;
  }
  return 0;
}
template<typename T>
T max(const vector<T> &x) {
  return *max_element(ALL(x));
}
template<typename T>
T min(const vector<T> &x) {
  return *min_element(ALL(x));
}
template<typename T>
T sum(const vector<T> &x) {
  return accumulate(ALL(x), T(0));
}

template<typename T>
bool print_(const T &a) {
  cout << a;
  return true;
}
template<typename T>
bool print_(const vector<T> &vec) {
  for(auto &a: vec) {
    cout << a;
    if(&a != &vec.back())
      cout << ' ';
  }
  return false;
}
template<typename T>
bool print_(const vector<vector<T>> &vv) {
  for(auto &v: vv) {
    for(auto &a: v) {
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
template<typename Head, typename... Tail>
void print(Head &&head, Tail &&...tail) {
  bool f = print_(head);
  if(sizeof...(tail) != 0)
    cout << (f ? ' ' : '\n');
  print(forward<Tail>(tail)...);
}

struct Timer {
  chrono::high_resolution_clock::time_point start, now;
  chrono::nanoseconds nano;
  int threshold = 1930000000; // 1.93 s
  Timer() {
    reset();
  }
  void reset() {
    start = chrono::high_resolution_clock::now();
  }
  int get_ns() {
    now = chrono::high_resolution_clock::now();
    nano = chrono::duration_cast<chrono::nanoseconds>(now - start);
    return nano.count();
  }
  int get_us() {
    return get_ns() / 1000;
  }
  int get_ms() {
    return get_ns() / 1000000;
  }
  int get_s() {
    return get_ns() / 1000000000;
  }
  int get_ns_remain() {
    return threshold - get_ns();
  }
  int get_us_remain() {
    return get_ns_remain() / 1000;
  }
  int get_ms_remain() {
    return get_ns_remain() / 1000000;
  }
  int get_s_remain() {
    return get_ns_remain() / 1000000000;
  }
  int get_limit_ms() {
    return threshold / 1000000;
  }
  bool intime() {
    return get_ns() <= threshold;
  }
} timer;

// https://en.wikipedia.org/wiki/Xorshift
struct XorShift128Plus {
  uint64_t s0, s1;
  // seed != 0
  XorShift128Plus(uint64_t s0_, uint64_t s1_): s0(s0_), s1(s1_) {
  }
  // [0, 2**64)
  uint64_t get() {
    uint64_t x = s0;
    const uint64_t y = s1;
    s0 = y;
    x ^= x << 23;
    s1 = x ^ y ^ (x >> 17) ^ (y >> 26);
    return s1 + y;
  }
  // [min, max]
  int getint(int mi, int ma) {
    return mi + get() % (ma - mi + 1);
  }
  // [min, max]
  ll getll(ll mi, ll ma) {
    return mi + get() % (ma - mi + 1);
  }
  // [0, 1)
  double getdouble() {
    return get() / pow(2.0, 64);
  }
  // [min, max)
  double getdouble(double mi, double ma) {
    return mi + getdouble() * (ma - mi);
  }
  // normal
  double getnormal() {
    double x = getdouble(), y = getdouble();
    return sqrt(-2.0 * log(x)) * cos(2.0 * M_PI * y);
  }
};

XorShift128Plus rnd(697268320233765593, 527745645107487933);

#pragma endregion

void solve() {
}

int main() {
  solve();
}