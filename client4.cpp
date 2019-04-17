#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
  Matrix m = Matrix(3,3);
  cin >> m;
  cout << m;
  //row and column index starts from 0!
  cout << "The entry at the 1st row and 2nd column is " << m.get_entry(1,2) << endl;
  cout << "The entry at the 2nd row and 0th column is " << m.get_entry(2,0) << endl;
  
  cout << "The entry at the 3rd row and 1st column is " << m.get_entry(3,1) << endl; //index out of range, error

  return 0;
}
