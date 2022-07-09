---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: Cpp/AlgebraicStructure/Group.hpp
    title: "\u30A2\u30D5\u30A3\u30F3\u5199\u50CF y = ax + b"
  - icon: ':warning:'
    path: Cpp/AlgebraicStructure/Mapping.hpp
    title: "\u5199\u50CF\u306F X -> X \u306A\u3089\u7D50\u5408\u7684\u306A\u306E\u3067\
      \u5909\u63DB\u30E2\u30CE\u30A4\u30C9\u3092\u306A\u3059"
  - icon: ':warning:'
    path: Cpp/AlgebraicStructure/Monoid.hpp
    title: Cpp/AlgebraicStructure/Monoid.hpp
  - icon: ':warning:'
    path: Cpp/Array/CumulativeSum.hpp
    title: "1\u6B21\u5143\u7D2F\u7A4D\u548C"
  - icon: ':x:'
    path: Cpp/Array/SortUtil.hpp
    title: "\u9006\u7F6E\u63DB"
  - icon: ':heavy_check_mark:'
    path: Cpp/Geometry/Point.hpp
    title: Cpp/Geometry/Point.hpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/BellmanFord.hpp
    title: Cpp/Graph/BellmanFord.hpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/Dijkstra.hpp
    title: Cpp/Graph/Dijkstra.hpp
  - icon: ':question:'
    path: Cpp/Graph/GraphL.hpp
    title: Cpp/Graph/GraphL.hpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/GraphM.hpp
    title: Cpp/Graph/GraphM.hpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/Lowlink.hpp
    title: Cpp/Graph/Lowlink.hpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/Prim.hpp
    title: Cpp/Graph/Prim.hpp
  - icon: ':question:'
    path: Cpp/Graph/TopologicalSort.hpp
    title: Cpp/Graph/TopologicalSort.hpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/UnionFind.hpp
    title: Cpp/Graph/UnionFind.hpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Graph/WarshallFloyd.hpp
    title: Cpp/Graph/WarshallFloyd.hpp
  - icon: ':heavy_check_mark:'
    path: Cpp/ModInt/ModInt.hpp
    title: "\u5270\u4F59\u3092\u53D6\u308A[0, mod)\u306B\u53CE\u3081\u308Bint"
  - icon: ':heavy_check_mark:'
    path: Cpp/NumberTheory/Factorize.hpp
    title: Cpp/NumberTheory/Factorize.hpp
  - icon: ':heavy_check_mark:'
    path: Cpp/NumberTheory/IsPrime.hpp
    title: Cpp/NumberTheory/IsPrime.hpp
  - icon: ':heavy_check_mark:'
    path: Cpp/SegmentTree/SegmentTree.hpp
    title: "\u30BB\u30B0\u30E1\u30F3\u30C8\u6728 based on ACL"
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/APlusB.test.cpp
    title: Cpp/Verify/APlusB.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/ArticulationPoints.test.cpp
    title: Cpp/Verify/ArticulationPoints.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/BellmanFord.test.cpp
    title: Cpp/Verify/BellmanFord.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/Bridges.test.cpp
    title: Cpp/Verify/Bridges.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/DetectCycleDirected.test.cpp
    title: Cpp/Verify/DetectCycleDirected.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/Dijkstra.test.cpp
    title: Cpp/Verify/Dijkstra.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/Dijkstra2.test.cpp
    title: Cpp/Verify/Dijkstra2.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/Factorize.test.cpp
    title: Cpp/Verify/Factorize.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/Factorize2.test.cpp
    title: Cpp/Verify/Factorize2.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/IsPrime.test.cpp
    title: Cpp/Verify/IsPrime.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/ManyAPlusB.test.cpp
    title: Cpp/Verify/ManyAPlusB.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/PointAddRangeSum.test.cpp
    title: Cpp/Verify/PointAddRangeSum.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/PointSetRangeComposite.test.cpp
    title: Cpp/Verify/PointSetRangeComposite.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/Prim.test.cpp
    title: Cpp/Verify/Prim.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/SortPointsByArgument.test.cpp
    title: Cpp/Verify/SortPointsByArgument.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/UnionFind.test.cpp
    title: Cpp/Verify/UnionFind.test.cpp
  - icon: ':heavy_check_mark:'
    path: Cpp/Verify/WarshallFloyd.test.cpp
    title: Cpp/Verify/WarshallFloyd.test.cpp
  - icon: ':x:'
    path: Cpp/VerifyIgnored/TopologicalSort.test.cpp
    title: Cpp/VerifyIgnored/TopologicalSort.test.cpp
  - icon: ':x:'
    path: Cpp/VerifyManually/compress.test.cpp
    title: Cpp/VerifyManually/compress.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: '#line 2 "Cpp/Template/SmallTemplate.hpp"

    #include <bits/stdc++.h>

    using namespace std;

    using ll = int64_t;

    using ull = uint64_t;

    using ld = long double;

    constexpr ll INF = 1e+18;

    constexpr ld EPS = 1e-12L;

    constexpr ld PI = 3.14159265358979323846L;

    '
  code: '#pragma once

    #include <bits/stdc++.h>

    using namespace std;

    using ll = int64_t;

    using ull = uint64_t;

    using ld = long double;

    constexpr ll INF = 1e+18;

    constexpr ld EPS = 1e-12L;

    constexpr ld PI = 3.14159265358979323846L;

    '
  dependsOn: []
  isVerificationFile: false
  path: Cpp/Template/SmallTemplate.hpp
  requiredBy:
  - Cpp/AlgebraicStructure/Mapping.hpp
  - Cpp/AlgebraicStructure/Monoid.hpp
  - Cpp/AlgebraicStructure/Group.hpp
  - Cpp/NumberTheory/IsPrime.hpp
  - Cpp/NumberTheory/Factorize.hpp
  - Cpp/ModInt/ModInt.hpp
  - Cpp/SegmentTree/SegmentTree.hpp
  - Cpp/Geometry/Point.hpp
  - Cpp/Graph/TopologicalSort.hpp
  - Cpp/Graph/Lowlink.hpp
  - Cpp/Graph/Dijkstra.hpp
  - Cpp/Graph/UnionFind.hpp
  - Cpp/Graph/WarshallFloyd.hpp
  - Cpp/Graph/BellmanFord.hpp
  - Cpp/Graph/GraphM.hpp
  - Cpp/Graph/Prim.hpp
  - Cpp/Graph/GraphL.hpp
  - Cpp/Array/CumulativeSum.hpp
  - Cpp/Array/SortUtil.hpp
  timestamp: '2022-06-30 00:19:58+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - Cpp/VerifyIgnored/TopologicalSort.test.cpp
  - Cpp/VerifyManually/compress.test.cpp
  - Cpp/Verify/PointAddRangeSum.test.cpp
  - Cpp/Verify/APlusB.test.cpp
  - Cpp/Verify/Bridges.test.cpp
  - Cpp/Verify/Dijkstra2.test.cpp
  - Cpp/Verify/BellmanFord.test.cpp
  - Cpp/Verify/UnionFind.test.cpp
  - Cpp/Verify/DetectCycleDirected.test.cpp
  - Cpp/Verify/PointSetRangeComposite.test.cpp
  - Cpp/Verify/Dijkstra.test.cpp
  - Cpp/Verify/Factorize.test.cpp
  - Cpp/Verify/ArticulationPoints.test.cpp
  - Cpp/Verify/Prim.test.cpp
  - Cpp/Verify/ManyAPlusB.test.cpp
  - Cpp/Verify/SortPointsByArgument.test.cpp
  - Cpp/Verify/IsPrime.test.cpp
  - Cpp/Verify/WarshallFloyd.test.cpp
  - Cpp/Verify/Factorize2.test.cpp
documentation_of: Cpp/Template/SmallTemplate.hpp
layout: document
redirect_from:
- /library/Cpp/Template/SmallTemplate.hpp
- /library/Cpp/Template/SmallTemplate.hpp.html
title: Cpp/Template/SmallTemplate.hpp
---
