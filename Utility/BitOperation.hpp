#include "Template/SmallTemplate.hpp"

int popcount8(unsigned char v) {
  unsigned char x = (v & 0x55) + ((v >> 1) & 0x55);
  x = (x & 0x33) + ((x >> 2) & 0x33);
  return (x & 0x0f) + ((x >> 4) & 0x0f);
}

int popcount16(unsigned short v) {
  unsigned short x = (v & 0x5555) + ((v >> 1) & 0x5555);
  x = (x & 0x3333) + ((x >> 2) & 0x3333);
  x = (x & 0x0f0f) + ((x >> 4) & 0x0f0f);
  return (x & 0x00ff) + ((x >> 8) & 0x00ff);
}

int popcount32(unsigned int v) {
  unsigned int x = (v & 0x55555555) + ((v >> 1) & 0x55555555);
  x = (x & 0x33333333) + ((x >> 2) & 0x33333333);
  x = (x & 0x0f0f0f0f) + ((x >> 4) & 0x0f0f0f0f);
  x = (x & 0x00ff00ff) + ((x >> 8) & 0x00ff00ff);
  return (x & 0x0000ffff) + ((x >> 16) & 0x0000ffff);
}

int popcount64(unsigned long long v) {
  unsigned long long x = (v & 0x5555555555555555) + ((v >> 1) & 0x5555555555555555);
  x = (x & 0x3333333333333333) + ((x >> 2) & 0x3333333333333333);
  x = (x & 0x0f0f0f0f0f0f0f0f) + ((x >> 4) & 0x0f0f0f0f0f0f0f0f);
  x = (x & 0x00ff00ff00ff00ff) + ((x >> 8) & 0x00ff00ff00ff00ff);
  x = (x & 0x0000ffff0000ffff) + ((x >> 16) & 0x0000ffff0000ffff);
  return (int)((x & 0x00000000ffffffff) + ((x >> 32) & 0x00000000ffffffff));
}

int msb8(unsigned char v) {
  assert(v != 0);
  v |= (v >> 1);
  v |= (v >> 2);
  v |= (v >> 4);
  return popcount8(v) - 1;
}

int msb16(unsigned short v) {
  assert(v != 0);
  v |= (v >> 1);
  v |= (v >> 2);
  v |= (v >> 4);
  v |= (v >> 8);
  return popcount16(v) - 1;
}

int msb32(unsigned int v) {
  assert(v != 0);
  v |= (v >> 1);
  v |= (v >> 2);
  v |= (v >> 4);
  v |= (v >> 8);
  v |= (v >> 16);
  return popcount32(v) - 1;
}

int msb64(unsigned long long v) {
  assert(v != 0);
  v |= (v >> 1);
  v |= (v >> 2);
  v |= (v >> 4);
  v |= (v >> 8);
  v |= (v >> 16);
  v |= (v >> 32);
  return popcount64(v) - 1;
}

int lsb8(unsigned char v) {
  assert(v != 0);
  v |= (v << 1);
  v |= (v << 2);
  v |= (v << 4);
  return 8 - popcount8(v);
}

int lsb16(unsigned short v) {
  assert(v != 0);
  v |= (v << 1);
  v |= (v << 2);
  v |= (v << 4);
  v |= (v << 8);
  return 16 - popcount16(v);
}

int lsb32(unsigned v) {
  assert(v != 0);
  v |= (v << 1);
  v |= (v << 2);
  v |= (v << 4);
  v |= (v << 8);
  v |= (v << 16);
  return 32 - popcount32(v);
}

int lsb64(unsigned long long v) {
  assert(v != 0);
  v |= (v << 1);
  v |= (v << 2);
  v |= (v << 4);
  v |= (v << 8);
  v |= (v << 16);
  v |= (v << 32);
  return 64 - popcount64(v);
}
