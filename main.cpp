// #include "UnitConverter.hpp"
#include "DerivativeCalculator.hpp"
#include <cmath>
#include <cstdlib>
#include <deque>
#include <fstream>
#include <iostream>

// main to test conversion from decimal to binary
/**
int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " <number to convert>" << std::endl;
    return 1;
  }

  int decimalNumber = std::atoi(argv[1]);

  std::deque<bool> binaryNumber = comph::decimalToBinary(decimalNumber);
  std::cout << "Binary representation: ";
  while (binaryNumber.size()) {
    std::cout << binaryNumber.back();
    binaryNumber.pop_back();
  }
  std::cout << std::endl;

  return 0;
}
**/

// main to test numerical derivation
int main(int argc, char *argv[]) {
  if (argc < 4) {
    std::cerr << "Usage: " << argv[0] << " <string: file path>"
              << " <double: value of x>"
              << " <int: order of derivation>" << std::endl;
    return 1;
  }

  // Extract arguments
  std::string outFileName = argv[1];
  double x = std::atof(argv[2]);
  int n = std::atoi(argv[3]);

  // Calculate derivative
  double derivative = comph::Derivate(x, [](double x){
    return x*x*x+x*x+x;
  }, n);

  // Save the result to the file
  std::ofstream outFile;
  outFile.open(outFileName);
  outFile << "Function: Polynomial x^3+x^2+x"
          << "\n"
          << "Input: " << argv[2] << "\n"
          << "Derivative order: " << argv[3] << "\n"
          << "Result: " << derivative << "\n";
  outFile.close();

  return 0;
}
