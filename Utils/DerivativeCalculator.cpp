/**
 * @file DerivativeCalculator.cpp
 * @brief Implementation of numerical differentiation functions.
 * @author Arsenii Kvachan
 * @date 2024
 * @version 1.0
 * @encoding UTF-8
 */

/** Includes (Own Implementations) **/
#include "DerivativeCalculator.hpp"
#include "MathUtils.hpp"

/** Includes (Standard Library) **/
#include <cmath>


 
namespace comph {

constexpr double f(double x) { return 2 * x * x; }

double Derivate(double x, double (*f)(double), int n) {
  switch (n) {
  case 0:
    return f(x);
  case 1: {
    double h = 10e-7;
    return ((f(x + h) - f(x - h)) / (2 * h));
  }
  default: {
    double sum = 0;
    double h = 10e-7;
    for (int k = 0; k < n + 1; k++) {
      sum += std::pow(-1, k + n) * C(n, k) * f(x + k * h);
    }
    return ((1.0 / std::pow(h, n)) * sum);
  }
  }
}

} // namespace comph
