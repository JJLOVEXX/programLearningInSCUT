#include "stdafx.h"
#include "Matrix.h"


Matrix::Matrix()
{
	a = d = 1;
	b = c = 0;
	cout << *this << endl;
}

Matrix Matrix::operator+(const Matrix & m)
{
	return Matrix(a + m.a, b + m.b, c + m.c, d + m.d);
	// TODO: 在此处插入 return 语句
}

Matrix Matrix::operator-(const Matrix & m)
{
	return Matrix(a-m.a,b-m.b,c-m.c,d-m.d);
}

Matrix Matrix::operator*(const Matrix & m)
{
	return Matrix(a*m.a+b*m.c,a*m.b+b*m.d,c*m.a+d*m.c,c*m.b+d*m.d);
}

Matrix Matrix::operator*=(const Matrix & m)
{
	double p = a, w = b, e = c, r = d;
	a = p * m.a + w * m.c;
	b = p * m.b + b * m.d;
	c = e * m.a + r * m.c;
	d = e * m.b + r * m.d;
	return Matrix(a, b, c, d);
}

Matrix Matrix::operator+=(const Matrix &m)
{
	double p = a, w = b, e = c, r = d;
	a = p + m.a;
	b = w + m.b;
	c = e + m.c;
	d = r + m.d;
	return Matrix(a, b, c, d);
}

Matrix Matrix::operator-=(const Matrix &m)
{
	double p = a, w = b, e = c, r = d;
	a = p - m.a;
	b = w - m.b;
	c = e - m.c;
	d = r - m.d;
	return Matrix(a, b, c, d);
}

Matrix Matrix::operator*(double i)
{
	return Matrix(i*a,i*b,i*c,i*d);
}

bool Matrix::operator==(const Matrix &n)const
{
	if ((a == n.a) && (b == n.b) && (c == n.c) && (d == n.d))
		return true;
	else
		return false;
}

bool Matrix::operator!=(const Matrix &z) const
{
	if (a != z.a || b != z.b || c != z.c || d != z.d)
		return true;
	else
		return false;
}


Matrix::Matrix(double z, double x, double v, double w):a(z),b(x),c(v),d(w)
{
	
}

Matrix::~Matrix()
{
}

ostream & operator<<(ostream &output, const Matrix &matrix)
{
	output << matrix.a << " " << matrix.b << "\n" << matrix.c << " " << matrix.d;
	return output;// TODO: 在此处插入 return 语句
}

istream & operator>>(istream &input, Matrix &matrix)
{
	input >> matrix.a>>matrix.b >> matrix.c >> matrix.d;
	return input;// TODO: 在此处插入 return 语句
}
