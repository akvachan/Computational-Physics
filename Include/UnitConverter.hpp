/**
 * @file UnitConverter.hpp
 * @brief Functions to convert between unit of measurements / representations.
 * @author Arsenii Kvachan
 * @date 2024
 * @version 1.0
 * @encoding UTF-8
 */

#pragma once

#include <deque>

/// Namespace containing computational helper functions.
namespace comph {

/**
 * @brief Converts a decimal integer to its binary representation.
 *
 * This function takes an integer in decimal format and returns its binary
 * representation as a deque of boolean values, where each boolean represents
 * a binary digit (0 or 1).
 *
 * The least significant bit (LSB) is stored as the first element in the deque,
 * and the most significant bit (MSB) is at the last element of the deque.
 *
 * @param decimalNumber The integer to be converted to binary.
 * @return A deque of boolean values representing the binary form of the input.
 *
 * @note The function is intended for non-negative integers.
 */
std::deque<bool> decimalToBinary(int decimalNumber);

} // namespace comph
