#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
using namespace std;
class Matrix
{
    private:
        int row;
        int column;
        float ** entries;
    public:
        Matrix(int r, int c);
        float get_entry(int r, int c);
        int get_row_dimension();
        int get_column_dimension();
        void row_switching(int i, int j);
        void row_multiplication(int i, float k);
        void transpose();
        void row_addition(int i, int j, float k);
    friend istream& operator>>( istream& cin, Matrix &a );
    friend ostream& operator<<( ostream& cout, Matrix &b );
    friend Matrix operator +( const Matrix &a, const Matrix &b );
    friend Matrix operator *( const float c, const Matrix &b );
    friend Matrix operator *( const Matrix &b, const float c );
    friend Matrix operator *( const Matrix &a, const Matrix &b );
};
#endif