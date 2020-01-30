#include "stdafx.h"
#include "Matrix.h"
#include<iostream>

using namespace std;

Matrix::Matrix(double a, double b, double c, double d):a(a),b(b),c(c),d(d)
{
	
}

void Matrix::printMatrix() const
{
	cout << a << " " << b << endl;
	cout << c << " " << d << endl;
}

void Matrix::setMatrix(double q, double w, double e, double r)
{
	a = q;
	b = w;
	c = e;
	d = r;
}

Matrix Matrix::operator+(const Matrix & p)
{
	return Matrix(a+p.a,b+p.b,c+p.c,d+p.d);
}

Matrix Matrix::operator-(const Matrix & o)
{
	return Matrix(a-o.a,b-o.b,c-o.c,d-o.d);
}

bool Matrix::operator!=(const Matrix & z) const
{
	if (a != z.a || b != z.b || c != z.c || d != z.d)
		return true;
	else
		return false;
}

bool Matrix::operator==(const Matrix & n) const
{
	if (a == n.a && b == n.b && c == n.c && d == n.d)
	return true;
}


Matrix::~Matrix()
{
}
