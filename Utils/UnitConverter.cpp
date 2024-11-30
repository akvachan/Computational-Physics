/**
 * @file UnitConverter.cpp
 * @brief Implementation of unit conversion functions, such as decimal to binary conversion.
 * @author Arsenii Kvachan
 * @date 2024
 * @version 1.0
 * @encoding UTF-8
 *
 * This file contains implementations for converting data types or units, such as
 * converting a decimal integer to its binary representation.
 */

/** Includes (Own Implementations) **/
#include "UnitConverter.hpp"

/** Includes (Standard Library) **/
#include <deque>

namespace comph {

std::deque<bool> decimalToBinary(int decimalNumber) {
  std::deque<bool> binarr;
  while (decimalNumber > 0) {
    binarr.push_back(decimalNumber % 2);
    decimalNumber /= 2;
  }
  return binarr;
}

} // namespace comph
