#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
  Matrix m = Matrix(2,3);
  cin >> m;
  cout << m << "has " << m.get_row_dimension() << " rows and " << m.get_column_dimension() << " columns." << endl;
  
  return 0;
}
