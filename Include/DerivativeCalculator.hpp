/**
 * @file DerivativeCalculator.hpp
 * @brief Header file for calculating higher order derivatives.
 * @author Arsenii Kvachan
 * @date 2024
 * @version 1.0
 * @encoding UTF-8
 */

#pragma once

namespace comph {

/**
 * @brief A sample mathematical function to be used in differentiation.
 *
 * This function is defined as `f(x) = 2 * x * x`.
 *
 * @param x The input value for the function.
 * @return The computed result of the function `f(x)`.
 */
constexpr double f(double x);

/**
 * @brief Numerically calculates the n-th derivative of a given function at a
 * point.
 *
 * This function uses finite difference methods to approximate the n-th
 * derivative of a specified mathematical function `f` at a point `x`.
 *
 * @param x The point at which to calculate the derivative.
 * @param f A pointer to the function to differentiate.
 * @param n The order of the derivative (e.g., 1 for the first derivative).
 * @return The approximated value of the n-th derivative at point `x`.
 *
 * @note For `n = 0`, the function simply returns `f(x)`.
 */
double Derivate(double x, double (*f)(double), int n);

} // namespace comph
