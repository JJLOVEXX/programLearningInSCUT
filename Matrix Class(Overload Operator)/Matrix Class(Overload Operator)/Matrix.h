#pragma once
#include<iostream>

using namespace std;


class Matrix
{
	friend ostream &operator<<(ostream &, const Matrix &);
	friend istream &operator>>(istream &, Matrix &);
public:
	Matrix();
	Matrix(double, double, double, double);
	Matrix operator+(const Matrix &);
	Matrix operator-(const Matrix &);
	Matrix operator*(const Matrix &);
	Matrix operator*=(const Matrix &);
	Matrix operator+=(const Matrix &);
	Matrix operator-=(const Matrix &);
	Matrix operator*(double);
	bool operator==(const Matrix &)const;
	bool operator!=(const Matrix &)const;
	~Matrix();
private:
	double a, b, c, d;
};

