---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://en.wikipedia.org/wiki/Miller%E2%80%93Rabin_primality_test
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Template/SmallTemplate.hpp:\
    \ line -1: no such header\n"
  code: "#include \"Template/SmallTemplate.hpp\"\n\n// Miller test for 64bit\n// https://en.wikipedia.org/wiki/Miller%E2%80%93Rabin_primality_test\n\
    bool isPrime(ull n) {\n  if(n == 2) {\n    return true;\n  }\n  if(!(n & 1) ||\
    \ n == 1) {\n    return false;\n  }\n  auto powmod64 = [](ull x, ull y, ull mod)\
    \ -> ull {\n    ull ret = 1;\n    while(y) {\n      if(y & 1) {\n        ret =\
    \ (__uint128_t)ret * x % mod;\n      }\n      x = (__uint128_t)x * x % mod;\n\
    \      y >>= 1;\n    }\n    return ret;\n  };\n  const ull primes[12] {2, 3, 5,\
    \ 7, 11, 13, 17, 19, 23, 29, 31, 37};\n  int r = 0;\n  ull d = n - 1;\n  while(!(d\
    \ & 1)) {\n    d >>= 1;\n    ++r;\n  }\n  for(const ull p: primes) {\n    if(p\
    \ > n - 2) {\n      break;\n    }\n    ull x = powmod64(p, d, n);\n    if(x ==\
    \ 1 || x == n - 1) {\n      continue;\n    }\n    bool composite = true;\n   \
    \ for(int i = 0; i < r - 1; ++i) {\n      x = powmod64(x, 2, n);\n      if(x ==\
    \ n - 1) {\n        composite = false;\n        break;\n      }\n    }\n    if(composite)\
    \ {\n      return false;\n    }\n  }\n  return true;\n}"
  dependsOn: []
  isVerificationFile: false
  path: Cpp/Math/Prime.hpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Cpp/Math/Prime.hpp
layout: document
redirect_from:
- /library/Cpp/Math/Prime.hpp
- /library/Cpp/Math/Prime.hpp.html
title: Cpp/Math/Prime.hpp
---
