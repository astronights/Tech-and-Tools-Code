#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
  Matrix m = Matrix(3,2);
  cin >> m;
  cout << m;
  m.transpose();
  cout << "after transposing, we get" << endl << m << endl;
  
  return 0;
}
