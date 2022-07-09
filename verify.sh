#!/bin/bash -eu

# (1) 通常
oj-verify run

# TODO (2) VerifyManually内の手動verify
# g++ -std=c++17 -O2 -Wall -g -I ./Cpp ./Cpp/VerifyManually/compress.test.cpp
# oj test -d ./Cpp/VerifyManually/tests/abc113_c