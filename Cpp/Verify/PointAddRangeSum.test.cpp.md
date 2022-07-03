---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Cpp/AlgebraicStructure/Group.hpp
    title: "\u30A2\u30D5\u30A3\u30F3\u5199\u50CF y = ax + b"
  - icon: ':heavy_check_mark:'
    path: Cpp/SegmentTree/SegmentTree.hpp
    title: "\u30BB\u30B0\u30E1\u30F3\u30C8\u6728 based on ACL"
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
    PROBLEM: https://judge.yosupo.jp/problem/point_add_range_sum
    links:
    - https://judge.yosupo.jp/problem/point_add_range_sum
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: AlgebraicStructure/Group.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\
    #include \"AlgebraicStructure/Group.hpp\"\n#include \"SegmentTree/SegmentTree.hpp\"\
    \n\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n  int N, Q;\n\
    \  cin >> N >> Q;\n  vector<GroupSum<ll>> a(N);\n  for(int i = 0; i < N; i++)\
    \ {\n    cin >> a[i].x;\n  }\n  SegmentTree<GroupSum<ll>> seg(a);\n  while(Q--)\
    \ {\n    int cmd;\n    ll x, y;\n    cin >> cmd >> x >> y;\n    if(cmd) {\n  \
    \    cout << seg.product(x, y).x << '\\n';\n    } else {\n      seg.set(x, seg.get(x).x\
    \ + y);\n    }\n  }\n}"
  dependsOn:
  - Cpp/AlgebraicStructure/Group.hpp
  - Cpp/Template/SmallTemplate.hpp
  - Cpp/SegmentTree/SegmentTree.hpp
  isVerificationFile: true
  path: Cpp/Verify/PointAddRangeSum.test.cpp
  requiredBy: []
  timestamp: '2022-07-03 09:53:35+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Cpp/Verify/PointAddRangeSum.test.cpp
layout: document
redirect_from:
- /verify/Cpp/Verify/PointAddRangeSum.test.cpp
- /verify/Cpp/Verify/PointAddRangeSum.test.cpp.html
title: Cpp/Verify/PointAddRangeSum.test.cpp
---
