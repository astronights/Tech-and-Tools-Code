#include <iostream>
#include "Matrix.h"
using namespace std;
Matrix::Matrix(int r, int c)
{
	if(r <= 0 || c <= 0)
	{
		cout<<"Invalid number of rows or columns!"<<endl;
	}
	else
	{
		row = r;
	    column = c;
	    entries = new float*[r]; 
		for (int i = 0; i < r; i++)
		{
	    	entries[i] = new float[c];
		}
		for (int i=0; i < r; i++) 
		{
		    for (int j=0; j < c; j++)
		    {
		        *(*(entries+i)+j) = 0;
		    }
		}
	}
}
istream& operator>>( istream& cin, Matrix &a )
{
  for (int i=0; i < a.get_row_dimension(); i++) 
		{
		    for (int j=0; j < a.get_column_dimension(); j++)
		    {
		        cin>>*(*(a.entries+i)+j);
		    }
		}
	  return cin;
}
ostream& operator<<( ostream& cout, Matrix &b )
{
  for (int i=0; i < b.get_row_dimension(); i++) 
		{
		    for (int j=0; j < b.get_column_dimension(); j++)
		    {
		        cout<<*(*(b.entries+i)+j)<<" ";
		    }
		    cout<<endl;
		}
		return cout;
}
float Matrix::get_entry(int r, int c)
{
    //cout<<"**"<<get_row_dimension()<<"*"<<get_column_dimension<<"**"<<endl;
    if(r >= 0 && r < get_row_dimension() && c >= 0 && c < get_column_dimension())
    {
        return *(*(entries+r)+c);   
    }
    else
    {
        cout<<"Index out of range!";
        exit(1);
    }
}
int Matrix::get_row_dimension()
{
    return row;
}
int Matrix::get_column_dimension()
{
    return column;
}
void Matrix::row_switching(int i, int j)
{
    if(i >= 0 && i < get_row_dimension() && j >= 0 && j < get_row_dimension())
    {
        float *temp;
        temp = new float[column]; 
		for (int k = 0; k < column; k++)
		{
	    	temp[k] = *(*(entries+i)+k);
	    	*(*(entries+i)+k) = *(*(entries+j)+k);
	    	*(*(entries+j)+k) = temp[k];
		}
	    delete[] temp;
    }
    else
    {
        cout<<"Index out of range!";
        exit(1);
    }
}
void Matrix::row_multiplication(int i, float k)
{
    if(i >= 0 && i < row)
    {
        if(k != 0 && k != 1.0)
        {
            for(int j = 0; j < column; j++)
            {
                float no = *(*(entries+i)+j);
                *(*(entries+i)+j) = no*k;
            }  
        }
        else
        {
            cout<<"Cannot be multiplied by a zero constant!";
            exit(1);
        }
    }
    else
    {
        cout<<"Index out of range!";
        exit(1);
    }
}
void Matrix::transpose()
{
	float ** ne;                
    ne = new float *[column];        
    for( int i = 0; i < column ; i++)
    {
        ne[i] = new float[row];
        for( int j = 0; j < row; j++)
        {
            *(*(ne+i)+j)=*(*(entries+j)+i);
        }
    }
    for(int i = 0; i < column; i++)
    {
        for(int j = 0; j < row; j++)
        {
            *(*(entries+i)+j)=*(*(ne+i)+j);
        }
    }
    int temp = row;
    row = column;
    column = temp;
    for(int i = 0; i < column; i++)
    {
        delete[] ne[i];
    }
    delete[] ne;
}
void Matrix::row_addition(int i, int j, float k)
{
    if(i >= 0 && i < get_row_dimension() && j >= 0 && j < get_row_dimension())
    {
        if(i != j)
        {
            for(int x = 0; x < column; x++)
            {
                float no = *(*(entries+j)+x);
                *(*(entries+i)+x) += no*k;
            }
        }
        else
        {
            cout<<"Cannot be the same row!";
            exit(1);
        }
    }
    else
    {
        cout<<"Index out of range!";
        exit(1);
    }
}
//Operator not working.
Matrix operator +(const Matrix &a, const Matrix &b)
{
    if(a.row == b.row && a.column == b.column)
    {
        Matrix c(a.row, a.column);            
        c.entries = new float *[a.row];        
        for( int i = 0; i < a.row ; i++)
        {
            c.entries[i] = new float[a.column];
            for( int j = 0; j < a.column; j++)
            {
                float alol = *(*(a.entries+i)+j);
                float blol = *(*(b.entries+i)+j);
                *(*(c.entries+i)+j)=alol+blol;
            }
        }
        return c;
    }
    else
    {
        cout<<"Cannot do the matrix addition!";
        exit(1);
    }
}
Matrix operator *( const float c, const Matrix &b )
{
    Matrix d(b.row, b.column);
    d.entries = new float *[b.row];        
    for( int i = 0; i < b.row ; i++)
    {
        d.entries[i] = new float[b.column];
        for( int j = 0; j < b.column; j++)
        {
            float no = *(*(b.entries+i)+j);
            *(*(d.entries+i)+j) = no*c;  
        }
    }
    return d;
}
Matrix operator *( const Matrix &b, const float c )
{
    Matrix d(b.row, b.column);
    d.entries = new float *[b.row];        
    for( int i = 0; i < b.row ; i++)
    {
        d.entries[i] = new float[b.column];
        for( int j = 0; j < b.column; j++)
        {
            float no = *(*(b.entries+i)+j);
            *(*(d.entries+i)+j) = no*c;  
        }
    }
    return d;
}
Matrix operator *( const Matrix &a, const Matrix &b)
{
    if(a.column == b.row)
    {
        Matrix d(a.row, b.column);
        for( int i = 0; i < d.row ; i++)
        {
            d.entries[i] = new float[b.column];
            for( int j = 0; j < d.column; j++)
            {
                float no = 0;
                for(int k = 0; k < a.column; k++)
                {
                    float a1 = *(*(a.entries+i)+k);
                    float a2 = *(*(b.entries+k)+j);
                    no += a1*a2;
                }
                *(*(d.entries+i)+j) = no;  
            }
        }
        return d;
    }
    else
    {
        cout<<"Cannot do the matrix multiplication!";
        exit(1);
    }
}