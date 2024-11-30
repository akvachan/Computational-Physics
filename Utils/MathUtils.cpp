/**
 * @file MathUtils.cpp
 * @brief Implementation of mathematical functions.
 * @author Arsenii Kvachan
 * @date 2024
 * @version 1.0
 * @encoding UTF-8
 */

/** Includes (Own Implementations) **/
#include "MathUtils.hpp"

namespace comph {

double C(int n, int k) {
  double res = 1;
  for (int i = 1; i <= k; ++i)
    res = res * (n - k + i) / i;
  return res;
}

} // namespace comph
