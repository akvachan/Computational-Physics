#include <iostream>

int main(int argc, char *argv[]) {
  // first index is rows, second index is columns
  // 2D array is a matrix
  int A[2][5]{
    {1, 0, 1, 0, 1},
    {2, 3, 4, 5, 5},
  };

  int B[5][2]{
    {1, 0}, 
    {2, 3}, 
    {2, 3},
    {2, 3},
    {2, 3},
  };

  int C[2][2];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      C[i][j] = 0;
    }
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 5; k++) {
         C[i][j] += (A[i][k] * B[k][j]);
      }
    }
  }

  int max_length = 0;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      std::cout << '|' << C[i][j];
    }
    std::cout << "|\n";
  }
}
