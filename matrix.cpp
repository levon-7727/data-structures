#include <iostream>

template <typename T>

class Matrix {
public:
  T** matrix;
  int N, M;
  Matrix(T** _matrix, int n, int m) : N(n), M(m) {
    matrix = new T*[N];
    for(int i = 0; i < N; i++) {
      matrix[i] = new T[M];
    }
    for(int i = 0; i < N; i++) {
      for(int j = 0; j < M; j++) {
        matrix[i][j] = _matrix[i][j];
      }
    }
  }
  void set(int row, int col, T value) {
    matrix[row][col] = value;
  }
  T get(int row, int col) {
    return matrix[row][col];
  }
  void print() {
    for(int i = 0; i < N; i++) {
      for(int j = 0; j < M; j++) {
        std::cout<<matrix[i][j]<<" ";
      }
    }
    std::cout<<"\n";
  }

~Matrix() {
  for(int i = 0; i < N; i++) {
    delete[] matrix[i];
  }
  delete[] matrix;
}
};

int main()
{
  int rows = 5, cols = 3;
  int** matrix = new int*[rows];
  for(int i = 0; i < rows; i++) {
    matrix[i] = new int[cols];
  }
  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
      matrix[i][j] = i*j;
    }
  }
  Matrix<int> m(matrix, rows, cols);
  m.print();
  for(int i = 0; i < rows; i++) {
    delete[] matrix[i];
  }
  
  delete[] matrix;
  return 0;
}

// cllas-shablon - 3