---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: Cpp/Template/SmallTemplate.hpp
    title: Cpp/Template/SmallTemplate.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u5199\u50CF\u306F X -> X \u306A\u3089\u7D50\u5408\u7684\u306A\
      \u306E\u3067\u5909\u63DB\u30E2\u30CE\u30A4\u30C9\u3092\u306A\u3059"
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.5/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Template/SmallTemplate.hpp:\
    \ line -1: no such header\n"
  code: "#pragma once\n#include \"Template/SmallTemplate.hpp\"\n\n/**\n * @brief \u5199\
    \u50CF\u306F X -> X \u306A\u3089\u7D50\u5408\u7684\u306A\u306E\u3067\u5909\u63DB\
    \u30E2\u30CE\u30A4\u30C9\u3092\u306A\u3059\n * \u6052\u7B49\u5199\u50CF\uFF1A\
    static Mapping ide()\n * \u9069\u7528\uFF1AU apply(U x) const\n * \u5408\u6210\
    \uFF1Afriend Mapping compose(const Mappint &, const Mappint &)\n */\n\n/**\n *\
    \ @brief \u30A2\u30D5\u30A3\u30F3\u5199\u50CF y = ax + b\n * @tparam T \n */\n\
    template<class T>\nstruct Affine {\n  T a, b;\n  Affine(T a_, T b_): a(a_), b(b_)\
    \ {}\n  Affine(): Affine(ide()) {}\n  static Affine ide() { return {1, 0}; }\n\
    \  template<class U>\n  U apply(U x) const {\n    return a * x + b;\n  }\n  friend\
    \ Affine compose(const Affine &p, const Affine &q) { return {p.a * q.a, p.b *\
    \ q.a + q.b}; }\n  Affine inv() const { return {1 / a, -b / a}; }\n};\n"
  dependsOn:
  - Cpp/Template/SmallTemplate.hpp
  isVerificationFile: false
  path: Cpp/AlgebraicStructure/Mapping.hpp
  requiredBy: []
  timestamp: '2022-07-03 09:53:35+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Cpp/AlgebraicStructure/Mapping.hpp
layout: document
redirect_from:
- /library/Cpp/AlgebraicStructure/Mapping.hpp
- /library/Cpp/AlgebraicStructure/Mapping.hpp.html
title: "\u5199\u50CF\u306F X -> X \u306A\u3089\u7D50\u5408\u7684\u306A\u306E\u3067\
  \u5909\u63DB\u30E2\u30CE\u30A4\u30C9\u3092\u306A\u3059"
---
