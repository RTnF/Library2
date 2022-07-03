---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Cpp/AlgebraicStructure/Group.hpp
    title: "\u30A2\u30D5\u30A3\u30F3\u5199\u50CF y = ax + b"
  - icon: ':heavy_check_mark:'
    path: Cpp/ModInt/ModInt.hpp
    title: "\u5270\u4F59\u3092\u53D6\u308A[0, mod)\u306B\u53CE\u3081\u308Bint"
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
    PROBLEM: https://judge.yosupo.jp/problem/point_set_range_composite
    links:
    - https://judge.yosupo.jp/problem/point_set_range_composite
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ModInt/ModInt.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_set_range_composite\"\
    \n#include \"ModInt/ModInt.hpp\"\n#include \"AlgebraicStructure/Group.hpp\"\n\
    #include \"SegmentTree/SegmentTree.hpp\"\n\nint main() {\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n\
    \  int N, Q;\n  cin >> N >> Q;\n  vector<GroupAffine<mint>> v(N);\n  for(int i\
    \ = 0; i < N; i++) {\n    int a, b;\n    cin >> a >> b;\n    v[i] = {a, b};\n\
    \  }\n  SegmentTree<GroupAffine<mint>> sg(v);\n  while(Q--) {\n    int type;\n\
    \    cin >> type;\n    if(type) {\n      int l, r;\n      mint x;\n      cin >>\
    \ l >> r >> x;\n      auto p = sg.product(l, r);\n      cout << p.a * x + p.b\
    \ << '\\n';\n    } else {\n      int p;\n      mint c, d;\n      cin >> p >> c\
    \ >> d;\n      sg.set(p, {c, d});\n    }\n  }\n}"
  dependsOn:
  - Cpp/ModInt/ModInt.hpp
  - Cpp/Template/SmallTemplate.hpp
  - Cpp/AlgebraicStructure/Group.hpp
  - Cpp/SegmentTree/SegmentTree.hpp
  isVerificationFile: true
  path: Cpp/Verify/PointSetRangeComposite.test.cpp
  requiredBy: []
  timestamp: '2022-07-03 09:53:35+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Cpp/Verify/PointSetRangeComposite.test.cpp
layout: document
redirect_from:
- /verify/Cpp/Verify/PointSetRangeComposite.test.cpp
- /verify/Cpp/Verify/PointSetRangeComposite.test.cpp.html
title: Cpp/Verify/PointSetRangeComposite.test.cpp
---
