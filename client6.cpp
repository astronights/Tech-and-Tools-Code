#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
  Matrix m = Matrix(3,2);
  cin >> m;
  cout << m;
  m.row_switching(1, 2); // row index starts from 0
  cout << "after row-switching, we get" << endl << m << endl;
  
  m.row_switching(1, 3); //error, row index out of range

  return 0;
}
