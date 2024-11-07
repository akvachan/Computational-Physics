/**
 * @file MathUtils.hpp
 * @brief Header file for simple math functions and methods.
 * @date 2024
 * @version 1.0
 * @encoding UTF-8
 */

#pragma once

namespace comph {

/**
 * @brief Calculates the binomial coefficient C(n, k).
 *
 * Computes the binomial coefficient, often read as "n choose k",
 * which represents the number of ways to choose k elements from
 * a set of n elements.
 *
 * @param n The total number of items.
 * @param k The number of items to choose.
 * @return The binomial coefficient as a double.
 */
double C(int n, int k);

} // namespace comph
