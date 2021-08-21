#include <cstdint>
#include <iostream>
#include <vector>
#include <climits>
#include <time.h>

#define MIN(a, b) a < b ? a : b;

/* ./a.out  38.22s user 3.16s system 99% cpu 41.415 total */
/* ./a.out  35.28s user 3.00s system 99% cpu 38.343 total */
inline int find_min(std::vector<int> &v)
{
  int mi = INT_MAX;
  for (int elem : v) {
    mi = MIN(mi, elem);
  }
  return mi;
}

/* ./a.out  35.75s user 2.93s system 99% cpu 38.689 total */
/* ./a.out  36.23s user 3.03s system 99% cpu 39.312 total */
inline int find_min_bit(std::vector<int> &v)
{
  int mi = INT_MAX;
  for (int elem : v) {
    mi = mi ^ ((elem ^ mi) & -(elem < mi));
  }
  return mi;
}

int main()
{
  srand(time(0));
  std::vector<int> v;
  int n = 1000000000;
  for (int i = 0; i < n; i++) {
    v.push_back(rand());
  }

  int ans = find_min_bit(v);
}
