#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
  Matrix m = Matrix(3,2);
  cin >> m;
  cout << m;
  m.row_addition(0, 1, 0.1); // row index starts from 0, row index should not be out of range
  cout << "after row-addition, we get" << endl << m << endl;

  m.row_addition(1, 1, 0.2); //error, cannot be the same row
  
  return 0;
}
