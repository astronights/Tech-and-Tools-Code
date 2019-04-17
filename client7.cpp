#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
  Matrix m = Matrix(3,2);
  cin >> m;
  cout << m;
  m.row_multiplication(1, 0.5); // row index starts from 0, row index should not be out of range
  cout << "after row-multiplication, we get" << endl << m << endl;

  m.row_multiplication(1, 0); //error, the constant number must be a non-zero number
  
  return 0;
}
