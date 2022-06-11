---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://en.wikipedia.org/wiki/Xorshift
  bundledCode: "#line 1 \"Cpp/Template/MMTemplate.cpp\"\n#pragma region template\n\
    #include <bits/stdc++.h>\nusing namespace std;\nusing ll = long long;\nusing vi\
    \ = vector<int>;\nusing vvi = vector<vi>;\nusing vvvi = vector<vvi>;\nusing vd\
    \ = vector<double>;\nusing vvd = vector<vd>;\nusing vvvd = vector<vvd>;\nusing\
    \ pii = pair<int, int>;\nusing vpii = vector<pii>;\nusing vs = vector<string>;\n\
    template<typename T>\nusing pqrev = priority_queue<T, vector<T>, greater<T>>;\n\
    #define rep(i, n) for(int i = 0, i##_end = (n); i < i##_end; i++)\n#define repb(i,\
    \ n) for(int i = (n)-1; i >= 0; i--)\n#define repr(i, a, b) for(int i = (a), i##_end\
    \ = (b); i < i##_end; i++)\n#define reprb(i, a, b) for(int i = (b)-1, i##_end\
    \ = (a); i >= i##_end; i--)\n#define ALL(a) (a).begin(), (a).end()\n#define SZ(x)\
    \ ((int)(x).size())\nconstexpr int INF = 1e9;\nconstexpr double EPS = 1e-12;\n\
    template<typename S, typename T>\ninline bool chmax(S &a, const T &b) {\n  if(a\
    \ < b) {\n    a = b;\n    return 1;\n  }\n  return 0;\n}\ntemplate<typename S,\
    \ typename T>\ninline bool chmin(S &a, const T &b) {\n  if(b < a) {\n    a = b;\n\
    \    return 1;\n  }\n  return 0;\n}\ntemplate<typename T>\nT max(const vector<T>\
    \ &x) {\n  return *max_element(ALL(x));\n}\ntemplate<typename T>\nT min(const\
    \ vector<T> &x) {\n  return *min_element(ALL(x));\n}\ntemplate<typename T>\nT\
    \ sum(const vector<T> &x) {\n  return accumulate(ALL(x), T(0));\n}\n\ntemplate<typename\
    \ T>\nbool print_(const T &a) {\n  cout << a;\n  return true;\n}\ntemplate<typename\
    \ T>\nbool print_(const vector<T> &vec) {\n  for(auto &a: vec) {\n    cout <<\
    \ a;\n    if(&a != &vec.back())\n      cout << ' ';\n  }\n  return false;\n}\n\
    template<typename T>\nbool print_(const vector<vector<T>> &vv) {\n  for(auto &v:\
    \ vv) {\n    for(auto &a: v) {\n      cout << a;\n      if(&a != &v.back())\n\
    \        cout << ' ';\n    }\n    if(&v != &vv.back())\n      cout << '\\n';\n\
    \  }\n  return false;\n}\nvoid print() {\n  cout << '\\n';\n}\ntemplate<typename\
    \ Head, typename... Tail>\nvoid print(Head &&head, Tail &&...tail) {\n  bool f\
    \ = print_(head);\n  if(sizeof...(tail) != 0)\n    cout << (f ? ' ' : '\\n');\n\
    \  print(forward<Tail>(tail)...);\n}\n\nstruct Timer {\n  chrono::high_resolution_clock::time_point\
    \ start, now;\n  chrono::nanoseconds nano;\n  int threshold = 1930000000; // 1.93\
    \ s\n  Timer() {\n    reset();\n  }\n  void reset() {\n    start = chrono::high_resolution_clock::now();\n\
    \  }\n  int get_ns() {\n    now = chrono::high_resolution_clock::now();\n    nano\
    \ = chrono::duration_cast<chrono::nanoseconds>(now - start);\n    return nano.count();\n\
    \  }\n  int get_us() {\n    return get_ns() / 1000;\n  }\n  int get_ms() {\n \
    \   return get_ns() / 1000000;\n  }\n  int get_s() {\n    return get_ns() / 1000000000;\n\
    \  }\n  int get_ns_remain() {\n    return threshold - get_ns();\n  }\n  int get_us_remain()\
    \ {\n    return get_ns_remain() / 1000;\n  }\n  int get_ms_remain() {\n    return\
    \ get_ns_remain() / 1000000;\n  }\n  int get_s_remain() {\n    return get_ns_remain()\
    \ / 1000000000;\n  }\n  int get_limit_ms() {\n    return threshold / 1000000;\n\
    \  }\n  bool intime() {\n    return get_ns() <= threshold;\n  }\n} timer;\n\n\
    // https://en.wikipedia.org/wiki/Xorshift\nstruct XorShift128Plus {\n  uint64_t\
    \ s0, s1;\n  // seed != 0\n  XorShift128Plus(uint64_t s0_, uint64_t s1_): s0(s0_),\
    \ s1(s1_) {\n  }\n  // [0, 2**64)\n  uint64_t get() {\n    uint64_t x = s0;\n\
    \    const uint64_t y = s1;\n    s0 = y;\n    x ^= x << 23;\n    s1 = x ^ y ^\
    \ (x >> 17) ^ (y >> 26);\n    return s1 + y;\n  }\n  // [min, max]\n  int getint(int\
    \ mi, int ma) {\n    return mi + get() % (ma - mi + 1);\n  }\n  // [min, max]\n\
    \  ll getll(ll mi, ll ma) {\n    return mi + get() % (ma - mi + 1);\n  }\n  //\
    \ [0, 1)\n  double getdouble() {\n    return get() / pow(2.0, 64);\n  }\n  //\
    \ [min, max)\n  double getdouble(double mi, double ma) {\n    return mi + getdouble()\
    \ * (ma - mi);\n  }\n  // normal\n  double getnormal() {\n    double x = getdouble(),\
    \ y = getdouble();\n    return sqrt(-2.0 * log(x)) * cos(2.0 * M_PI * y);\n  }\n\
    };\n\nXorShift128Plus rnd(697268320233765593, 527745645107487933);\n\n#pragma\
    \ endregion\n\nvoid solve() {\n}\n\nint main() {\n  solve();\n}\n"
  code: "#pragma region template\n#include <bits/stdc++.h>\nusing namespace std;\n\
    using ll = long long;\nusing vi = vector<int>;\nusing vvi = vector<vi>;\nusing\
    \ vvvi = vector<vvi>;\nusing vd = vector<double>;\nusing vvd = vector<vd>;\nusing\
    \ vvvd = vector<vvd>;\nusing pii = pair<int, int>;\nusing vpii = vector<pii>;\n\
    using vs = vector<string>;\ntemplate<typename T>\nusing pqrev = priority_queue<T,\
    \ vector<T>, greater<T>>;\n#define rep(i, n) for(int i = 0, i##_end = (n); i <\
    \ i##_end; i++)\n#define repb(i, n) for(int i = (n)-1; i >= 0; i--)\n#define repr(i,\
    \ a, b) for(int i = (a), i##_end = (b); i < i##_end; i++)\n#define reprb(i, a,\
    \ b) for(int i = (b)-1, i##_end = (a); i >= i##_end; i--)\n#define ALL(a) (a).begin(),\
    \ (a).end()\n#define SZ(x) ((int)(x).size())\nconstexpr int INF = 1e9;\nconstexpr\
    \ double EPS = 1e-12;\ntemplate<typename S, typename T>\ninline bool chmax(S &a,\
    \ const T &b) {\n  if(a < b) {\n    a = b;\n    return 1;\n  }\n  return 0;\n\
    }\ntemplate<typename S, typename T>\ninline bool chmin(S &a, const T &b) {\n \
    \ if(b < a) {\n    a = b;\n    return 1;\n  }\n  return 0;\n}\ntemplate<typename\
    \ T>\nT max(const vector<T> &x) {\n  return *max_element(ALL(x));\n}\ntemplate<typename\
    \ T>\nT min(const vector<T> &x) {\n  return *min_element(ALL(x));\n}\ntemplate<typename\
    \ T>\nT sum(const vector<T> &x) {\n  return accumulate(ALL(x), T(0));\n}\n\ntemplate<typename\
    \ T>\nbool print_(const T &a) {\n  cout << a;\n  return true;\n}\ntemplate<typename\
    \ T>\nbool print_(const vector<T> &vec) {\n  for(auto &a: vec) {\n    cout <<\
    \ a;\n    if(&a != &vec.back())\n      cout << ' ';\n  }\n  return false;\n}\n\
    template<typename T>\nbool print_(const vector<vector<T>> &vv) {\n  for(auto &v:\
    \ vv) {\n    for(auto &a: v) {\n      cout << a;\n      if(&a != &v.back())\n\
    \        cout << ' ';\n    }\n    if(&v != &vv.back())\n      cout << '\\n';\n\
    \  }\n  return false;\n}\nvoid print() {\n  cout << '\\n';\n}\ntemplate<typename\
    \ Head, typename... Tail>\nvoid print(Head &&head, Tail &&...tail) {\n  bool f\
    \ = print_(head);\n  if(sizeof...(tail) != 0)\n    cout << (f ? ' ' : '\\n');\n\
    \  print(forward<Tail>(tail)...);\n}\n\nstruct Timer {\n  chrono::high_resolution_clock::time_point\
    \ start, now;\n  chrono::nanoseconds nano;\n  int threshold = 1930000000; // 1.93\
    \ s\n  Timer() {\n    reset();\n  }\n  void reset() {\n    start = chrono::high_resolution_clock::now();\n\
    \  }\n  int get_ns() {\n    now = chrono::high_resolution_clock::now();\n    nano\
    \ = chrono::duration_cast<chrono::nanoseconds>(now - start);\n    return nano.count();\n\
    \  }\n  int get_us() {\n    return get_ns() / 1000;\n  }\n  int get_ms() {\n \
    \   return get_ns() / 1000000;\n  }\n  int get_s() {\n    return get_ns() / 1000000000;\n\
    \  }\n  int get_ns_remain() {\n    return threshold - get_ns();\n  }\n  int get_us_remain()\
    \ {\n    return get_ns_remain() / 1000;\n  }\n  int get_ms_remain() {\n    return\
    \ get_ns_remain() / 1000000;\n  }\n  int get_s_remain() {\n    return get_ns_remain()\
    \ / 1000000000;\n  }\n  int get_limit_ms() {\n    return threshold / 1000000;\n\
    \  }\n  bool intime() {\n    return get_ns() <= threshold;\n  }\n} timer;\n\n\
    // https://en.wikipedia.org/wiki/Xorshift\nstruct XorShift128Plus {\n  uint64_t\
    \ s0, s1;\n  // seed != 0\n  XorShift128Plus(uint64_t s0_, uint64_t s1_): s0(s0_),\
    \ s1(s1_) {\n  }\n  // [0, 2**64)\n  uint64_t get() {\n    uint64_t x = s0;\n\
    \    const uint64_t y = s1;\n    s0 = y;\n    x ^= x << 23;\n    s1 = x ^ y ^\
    \ (x >> 17) ^ (y >> 26);\n    return s1 + y;\n  }\n  // [min, max]\n  int getint(int\
    \ mi, int ma) {\n    return mi + get() % (ma - mi + 1);\n  }\n  // [min, max]\n\
    \  ll getll(ll mi, ll ma) {\n    return mi + get() % (ma - mi + 1);\n  }\n  //\
    \ [0, 1)\n  double getdouble() {\n    return get() / pow(2.0, 64);\n  }\n  //\
    \ [min, max)\n  double getdouble(double mi, double ma) {\n    return mi + getdouble()\
    \ * (ma - mi);\n  }\n  // normal\n  double getnormal() {\n    double x = getdouble(),\
    \ y = getdouble();\n    return sqrt(-2.0 * log(x)) * cos(2.0 * M_PI * y);\n  }\n\
    };\n\nXorShift128Plus rnd(697268320233765593, 527745645107487933);\n\n#pragma\
    \ endregion\n\nvoid solve() {\n}\n\nint main() {\n  solve();\n}"
  dependsOn: []
  isVerificationFile: false
  path: Cpp/Template/MMTemplate.cpp
  requiredBy: []
  timestamp: '2022-06-11 18:10:59+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Cpp/Template/MMTemplate.cpp
layout: document
redirect_from:
- /library/Cpp/Template/MMTemplate.cpp
- /library/Cpp/Template/MMTemplate.cpp.html
title: Cpp/Template/MMTemplate.cpp
---
