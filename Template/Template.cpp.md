---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 400, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ Template/Template.cpp: line 38: unable to process #include in #if / #ifdef /\
    \ #ifndef other than include guards\n"
  code: "#pragma region template\n#include <bits/stdc++.h>\n//#include <boost/multiprecision/cpp_int.hpp>\n\
    //#include <atcoder/all>\nusing namespace std;\n// using namespace atcoder;\n\
    // using cpp_int = boost::multiprecision::cpp_int;\nusing ll = long long;\nusing\
    \ ull = unsigned long long;\nusing ld = long double;\nusing vi = vector<int>;\n\
    using vvi = vector<vi>;\nusing vvvi = vector<vvi>;\nusing vll = vector<ll>;\n\
    using vvll = vector<vll>;\nusing vvvll = vector<vvll>;\nusing vld = vector<ld>;\n\
    using vvld = vector<vld>;\nusing vvvld = vector<vvld>;\nusing vs = vector<string>;\n\
    using pii = pair<int, int>;\nusing pll = pair<ll, ll>;\nusing pdd = pair<double,\
    \ double>;\nusing pld = pair<ld, ld>;\nusing vpii = vector<pii>;\nusing vp = vector<pll>;\n\
    using vpdd = vector<pdd>;\nusing vpld = vector<pld>;\ntemplate<typename T>\nusing\
    \ pqrev = priority_queue<T, vector<T>, greater<T>>;\n#define rep(i, n) for(ll\
    \ i = 0, i##_end = (n); i < i##_end; i++)\n#define repb(i, n) for(ll i = (n)-1;\
    \ i >= 0; i--)\n#define repr(i, a, b) for(ll i = (a), i##_end = (b); i < i##_end;\
    \ i++)\n#define reprb(i, a, b) for(ll i = (b)-1, i##_end = (a); i >= i##_end;\
    \ i--)\n#define ALL(a) begin(a), end(a)\n#define SZ(x) ((ll)(x).size())\n#ifdef\
    \ OJ_LOCAL\n#  include \"dump.hpp\"\n#else\n#  define dump(...) ((void)0)\n#endif\n\
    constexpr ll INF = 1e+18;\nconstexpr ld EPS = 1e-12L;\nconstexpr ld PI = 3.14159265358979323846L;\n\
    template<typename T>\nconstexpr T local([[maybe_unused]] const T &lcl, [[maybe_unused]]\
    \ const T &oj) {\n#ifdef OJ_LOCAL\n  return lcl;\n#else\n  return oj;\n#endif\n\
    }\ntemplate<typename S, typename T>\nconstexpr bool chmax(S &a, const T &b) {\n\
    \  if(a < b) {\n    a = b;\n    return 1;\n  }\n  return 0;\n}\ntemplate<typename\
    \ S, typename T>\nconstexpr bool chmin(S &a, const T &b) {\n  if(b < a) {\n  \
    \  a = b;\n    return 1;\n  }\n  return 0;\n}\ntemplate<typename T>\nT max(const\
    \ vector<T> &x) {\n  return *max_element(ALL(x));\n}\ntemplate<typename T>\nT\
    \ min(const vector<T> &x) {\n  return *min_element(ALL(x));\n}\ntemplate<typename\
    \ T>\npair<T, int> argmax(const vector<T> &x) {\n  int idx = 0;\n  T m = x[0];\n\
    \  repr(i, 1, SZ(x)) {\n    if(chmax(m, x[i]))\n      idx = i;\n  }\n  return\
    \ {m, idx};\n}\ntemplate<typename T>\npair<T, int> argmin(const vector<T> &x)\
    \ {\n  int idx = 0;\n  T m = x[0];\n  repr(i, 1, SZ(x)) {\n    if(chmin(m, x[i]))\n\
    \      idx = i;\n  }\n  return {m, idx};\n}\ntemplate<typename T>\nT sum(const\
    \ vector<T> &x) {\n  return accumulate(ALL(x), T(0));\n}\n// last param -> T\n\
    template<typename T>\nvector<T> makev(size_t a, T b) {\n  return vector<T>(a,\
    \ b);\n}\ntemplate<typename... Args>\nauto makev(size_t sz, Args... args) {\n\
    \  return vector<decltype(makev(args...))>(sz, makev(args...));\n}\n\ntemplate<typename\
    \ T>\nbool print_(const T &a) {\n  cout << a;\n  return true;\n}\ntemplate<typename\
    \ T>\nbool print_(const vector<T> &vec) {\n  for(auto &a: vec) {\n    cout <<\
    \ a;\n    if(&a != &vec.back())\n      cout << ' ';\n  }\n  return false;\n}\n\
    template<typename T>\nbool print_(const vector<vector<T>> &vv) {\n  for(auto &v:\
    \ vv) {\n    for(auto &a: v) {\n      cout << a;\n      if(&a != &v.back())\n\
    \        cout << ' ';\n    }\n    if(&v != &vv.back())\n      cout << '\\n';\n\
    \  }\n  return false;\n}\nvoid print() {\n  cout << '\\n';\n}\ntemplate<typename\
    \ Head, typename... Tail>\nvoid print(Head &&head, Tail &&...tail) {\n  bool f\
    \ = print_(head);\n  if(sizeof...(tail) != 0)\n    cout << (f ? ' ' : '\\n');\n\
    \  print(forward<Tail>(tail)...);\n}\n#pragma endregion\n\n//*\nconstexpr ll MOD\
    \ = 1e9 + 7;\n/*/\nconstexpr ll MOD = 998244353;\n//*/\n\n#define PRF(f)     \
    \                       \\\n  do {                                    \\\n   \
    \ cout << ((f) ? \"Yes\" : \"No\") << '\\n'; \\\n    return;                 \
    \              \\\n  } while(0)\n#define PR()        \\\n  do {              \\\
    \n    cout << \"-1\\n\"; \\\n    return;         \\\n  } while(0)\n//#define PRECISION\n\
    \nvoid solve() {\n}\n\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n\
    \  cout << fixed << setprecision(20);\n  //*\n  solve();\n  /*/\n  ll _cases;\n\
    \  cin >> _cases;\n  while (_cases--) solve();\n  //*/\n}"
  dependsOn: []
  isVerificationFile: false
  path: Template/Template.cpp
  requiredBy: []
  timestamp: '2022-06-07 07:59:15+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Template/Template.cpp
layout: document
redirect_from:
- /library/Template/Template.cpp
- /library/Template/Template.cpp.html
title: Template/Template.cpp
---
