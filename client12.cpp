#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
  Matrix m1 = Matrix(2,3);
  cin >> m1;
  Matrix m2 = Matrix(3,2);
  cin >> m2;

  Matrix m3 = m1 * m2;
  cout << m1 << "*" << endl << m2 << "=" << endl << m3;

  Matrix m4 = Matrix(2,2);
  cin >> m4;
  Matrix m5 = m1 * m2 * m4;
  cout << m1 << "*" << endl << m2 << "*" << endl << m4 << "=" << endl << m5;
  
  Matrix m6 = m1 * m4; //error, cannot do the matrix multiplication since m1's column dimension is not equal to m3's row dimension
  
  return 0;
}
