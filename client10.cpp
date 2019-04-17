#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
  Matrix m1 = Matrix(3,2);
  cin >> m1;
  Matrix m2 = Matrix(3,2);
  cin >> m2;

  Matrix m3 = m1 + m2;
  cout << m1 << "+" << endl << m2 << "=" << endl << m3;
  Matrix m4 = m1 + m2 + m1;
  cout << m1 << "+" << endl << m2 << "+" << endl << m1 << "=" << endl << m4;

  Matrix m5 = Matrix(2,2);

  Matrix m6 = m1 + m5; //error, cannot add matrices with different dimension(s)
  
  return 0;
}
