#pragma once
#ifndef MATRIX_H
#define MATRIX_H


class Matrix
{
public:
	Matrix(double, double, double, double);
	void printMatrix()const;
	void setMatrix(double, double, double, double);
	Matrix operator +(const Matrix &p);
	Matrix operator -(const Matrix &o);
	bool operator !=(const Matrix &z)const;
	bool operator ==(const Matrix &z)const;
	~Matrix();
private:
	double a, b, c, d;
};
#endif // !MATRIX_H
