---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Cpp/Geometry/Point.hpp
    title: Cpp/Geometry/Point.hpp
  - icon: ':question:'
    path: Cpp/Template/SmallTemplate.hpp
    title: Cpp/Template/SmallTemplate.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/sort_points_by_argument
    links:
    - https://judge.yosupo.jp/problem/sort_points_by_argument
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Template/SmallTemplate.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/sort_points_by_argument\"\
    \n#include \"Template/SmallTemplate.hpp\"\n#include \"Geometry/Point.hpp\"\n\n\
    int main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n  int n;\n  cin >>\
    \ n;\n  vector<Point> ps;\n  ps.reserve(n);\n  while(n--) {\n    ll x, y;\n  \
    \  cin >> x >> y;\n    ps.emplace_back(x, y);\n  }\n  sort(ps.begin(), ps.end());\n\
    \  for(auto &&p: ps) {\n    cout << p << '\\n';\n  }\n}"
  dependsOn:
  - Cpp/Template/SmallTemplate.hpp
  - Cpp/Geometry/Point.hpp
  isVerificationFile: true
  path: Cpp/Verify/SortPointsByArgument.test.cpp
  requiredBy: []
  timestamp: '2022-06-30 00:19:58+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Cpp/Verify/SortPointsByArgument.test.cpp
layout: document
redirect_from:
- /verify/Cpp/Verify/SortPointsByArgument.test.cpp
- /verify/Cpp/Verify/SortPointsByArgument.test.cpp.html
title: Cpp/Verify/SortPointsByArgument.test.cpp
---
