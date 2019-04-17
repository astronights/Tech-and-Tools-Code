#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
  Matrix m1 = Matrix(3,2);
  cin >> m1;

  Matrix m2 = 0.5 * m1;
  cout << "0.5 *" << endl << m1 << "=" << endl << m2;
  Matrix m3 = m1 * 0.2;
  cout << m1 << "* 0.2" << endl << "=" << endl << m3;
  Matrix m4 = -0.1 * m1 * 2;
  cout << "-0.1 *" << endl << m1 << "* 2" << endl << "=" << endl << m4;
  
  return 0;
}
