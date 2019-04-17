#include <iostream>
#include "Matrix.h"
#include "Equation_solving.h"

using namespace std;

int main()
{
  Matrix m1 = Matrix(4,3); // set 3 * 4 matrix
  Matrix m2 = Matrix(3,4); // set 4 * 2 matrix
  Matrix m3 = Matrix(4,2); // set 4 * 2 matrix
  cin >> m1;
  cout << "m1:" << endl << m1 << endl; // display m1

  cout << "2 * m1 * 0.1:" << endl << 2 * m1 * 0.1 << endl; // display the result of the matrix scalar multiplication
  m1.transpose(); //transpose m1;
  cout << "transpose m1:" << endl << m1 << endl; // display the transposition of matrix

  cin >> m2;
  cout << "m2:" << endl << m2 << endl; // display m2

  cout << "m1 + m2 + m2:" << endl << m1 + m2 + m2 << endl; // display the result of matrix addition

  cin >> m3;
  cout << "m3:" << endl << m3 << endl; // display m3

  cout << "m1 * m3:" << endl << m1 * m3 << endl; // display the result of matrix multiplication
  
  cout << "equation:" << endl;
  Display_equation(m2); // display the equation
  Gaussian_elimination(m2);
  cout << "solution:" << endl;
  Solution(m2); //give the solution
  cout << endl;

  return 0;
}

