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
    - https://ja.wikipedia.org/wiki/Xorshift
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
    \ sum(const vector<T> &x) {\n  return accumulate(ALL(x), T(0));\n}\nnamespace\
    \ in {\n  template<typename T>\n  bool print(const T &a) {\n    cout << a;\n \
    \   return true;\n  }\n  template<typename T>\n  bool print(const vector<T> &vec)\
    \ {\n    for(auto &a: vec) {\n      cout << a;\n      if(&a != &vec.back())\n\
    \        cout << ' ';\n    }\n    return false;\n  }\n  template<typename T>\n\
    \  bool print(const vector<vector<T>> &vv) {\n    for(auto &v: vv) {\n      for(auto\
    \ &a: v) {\n        cout << a;\n        if(&a != &v.back())\n          cout <<\
    \ ' ';\n      }\n      if(&v != &vv.back())\n        cout << '\\n';\n    }\n \
    \   return false;\n  }\n}; // namespace in\nvoid print() { cout << '\\n'; }\n\
    template<typename Head, typename... Tail>\nvoid print(Head &&head, Tail &&...tail)\
    \ {\n  bool f = in::print(head);\n  if(sizeof...(tail) != 0) {\n    cout << (f\
    \ ? ' ' : '\\n');\n  }\n  print(forward<Tail>(tail)...);\n}\n\nstruct Timer {\n\
    \  chrono::high_resolution_clock::time_point start, now;\n  chrono::nanoseconds\
    \ nano;\n  int threshold = 1930000000; // 1.93 s\n  Timer() { reset(); }\n  void\
    \ reset() { start = chrono::high_resolution_clock::now(); }\n  int get_ns() {\n\
    \    now = chrono::high_resolution_clock::now();\n    nano = chrono::duration_cast<chrono::nanoseconds>(now\
    \ - start);\n    return nano.count();\n  }\n  int get_us() { return get_ns() /\
    \ 1000; }\n  int get_ms() { return get_ns() / 1000000; }\n  int get_s() { return\
    \ get_ns() / 1000000000; }\n  int getRemain_ns() { return threshold - get_ns();\
    \ }\n  int getRemain_us() { return getRemain_ns() / 1000; }\n  int getRemain_ms()\
    \ { return getRemain_ns() / 1000000; }\n  int getRemain_s() { return getRemain_ns()\
    \ / 1000000000; }\n  int getLimit_ms() { return threshold / 1000000; }\n  bool\
    \ intime() { return get_ns() <= threshold; }\n} timer;\n\n// https://ja.wikipedia.org/wiki/Xorshift\n\
    class XorShift64 {\n  uint64_t s;\n\npublic:\n  XorShift64(uint64_t s_): s(s_)\
    \ {}\n  // [0, 2**64)\n  uint64_t get() {\n    uint64_t x = s;\n    x ^= x <<\
    \ 7;\n    return s = x ^ (x >> 9);\n  }\n  // [min, max)\n  int getInt(int mi,\
    \ int ma) { return mi + get() % (ma - mi); }\n  // [min, max)\n  ll getLL(ll mi,\
    \ ll ma) { return mi + get() % (ma - mi); }\n  // [0, 1)\n  double getDouble()\
    \ { return get() / pow(2.0, 64); }\n  // [min, max)\n  double getDouble(double\
    \ mi, double ma) { return mi + getDouble() * (ma - mi); }\n  // normal\n  double\
    \ getNormal() {\n    double x = getDouble(), y = getDouble();\n    return sqrt(-2.0\
    \ * log(x)) * cos(2.0 * M_PI * y);\n  }\n} rnd(720759665484242684ull);\n\n#pragma\
    \ endregion\n\nvoid solve() {}\n\nint main() { solve(); }\n"
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
    \ T>\nT sum(const vector<T> &x) {\n  return accumulate(ALL(x), T(0));\n}\nnamespace\
    \ in {\n  template<typename T>\n  bool print(const T &a) {\n    cout << a;\n \
    \   return true;\n  }\n  template<typename T>\n  bool print(const vector<T> &vec)\
    \ {\n    for(auto &a: vec) {\n      cout << a;\n      if(&a != &vec.back())\n\
    \        cout << ' ';\n    }\n    return false;\n  }\n  template<typename T>\n\
    \  bool print(const vector<vector<T>> &vv) {\n    for(auto &v: vv) {\n      for(auto\
    \ &a: v) {\n        cout << a;\n        if(&a != &v.back())\n          cout <<\
    \ ' ';\n      }\n      if(&v != &vv.back())\n        cout << '\\n';\n    }\n \
    \   return false;\n  }\n}; // namespace in\nvoid print() { cout << '\\n'; }\n\
    template<typename Head, typename... Tail>\nvoid print(Head &&head, Tail &&...tail)\
    \ {\n  bool f = in::print(head);\n  if(sizeof...(tail) != 0) {\n    cout << (f\
    \ ? ' ' : '\\n');\n  }\n  print(forward<Tail>(tail)...);\n}\n\nstruct Timer {\n\
    \  chrono::high_resolution_clock::time_point start, now;\n  chrono::nanoseconds\
    \ nano;\n  int threshold = 1930000000; // 1.93 s\n  Timer() { reset(); }\n  void\
    \ reset() { start = chrono::high_resolution_clock::now(); }\n  int get_ns() {\n\
    \    now = chrono::high_resolution_clock::now();\n    nano = chrono::duration_cast<chrono::nanoseconds>(now\
    \ - start);\n    return nano.count();\n  }\n  int get_us() { return get_ns() /\
    \ 1000; }\n  int get_ms() { return get_ns() / 1000000; }\n  int get_s() { return\
    \ get_ns() / 1000000000; }\n  int getRemain_ns() { return threshold - get_ns();\
    \ }\n  int getRemain_us() { return getRemain_ns() / 1000; }\n  int getRemain_ms()\
    \ { return getRemain_ns() / 1000000; }\n  int getRemain_s() { return getRemain_ns()\
    \ / 1000000000; }\n  int getLimit_ms() { return threshold / 1000000; }\n  bool\
    \ intime() { return get_ns() <= threshold; }\n} timer;\n\n// https://ja.wikipedia.org/wiki/Xorshift\n\
    class XorShift64 {\n  uint64_t s;\n\npublic:\n  XorShift64(uint64_t s_): s(s_)\
    \ {}\n  // [0, 2**64)\n  uint64_t get() {\n    uint64_t x = s;\n    x ^= x <<\
    \ 7;\n    return s = x ^ (x >> 9);\n  }\n  // [min, max)\n  int getInt(int mi,\
    \ int ma) { return mi + get() % (ma - mi); }\n  // [min, max)\n  ll getLL(ll mi,\
    \ ll ma) { return mi + get() % (ma - mi); }\n  // [0, 1)\n  double getDouble()\
    \ { return get() / pow(2.0, 64); }\n  // [min, max)\n  double getDouble(double\
    \ mi, double ma) { return mi + getDouble() * (ma - mi); }\n  // normal\n  double\
    \ getNormal() {\n    double x = getDouble(), y = getDouble();\n    return sqrt(-2.0\
    \ * log(x)) * cos(2.0 * M_PI * y);\n  }\n} rnd(720759665484242684ull);\n\n#pragma\
    \ endregion\n\nvoid solve() {}\n\nint main() { solve(); }"
  dependsOn: []
  isVerificationFile: false
  path: Cpp/Template/MMTemplate.cpp
  requiredBy: []
  timestamp: '2022-06-13 19:17:04+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Cpp/Template/MMTemplate.cpp
layout: document
redirect_from:
- /library/Cpp/Template/MMTemplate.cpp
- /library/Cpp/Template/MMTemplate.cpp.html
title: Cpp/Template/MMTemplate.cpp
---
