// Matrix Class(Overload Operator).cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Matrix.h"
#include<iostream>

using namespace std;

int main()
{
	cout << "Addition: " << endl;
	Matrix matrix1;
	cin >> matrix1;
	cout << matrix1 << endl;
	Matrix matrix2;
	cin >> matrix2;
	cout << matrix2 << endl;
	Matrix matrix3;
	
	matrix3 = matrix1 + matrix2;
	cout << matrix3 << endl;
	cout << endl;
	cout << endl;
	cout << "Subtraction: " << endl;
	Matrix matrix4;
	cin >> matrix1;
	cout << matrix1 << endl;
	cin >> matrix2;
	cout << matrix2 << endl;
	
	matrix4 = matrix1 - matrix2;
	cout << matrix4 << endl;
	cout << endl;
	cout << endl;
	cout << "Multiplication: " << endl;
	Matrix matrix5;
	cin >> matrix1;
	cout << matrix1 << endl;
	cin >> matrix2;
	cout << matrix2 << endl;
	
	matrix5 = matrix1 * matrix2;
	cout << matrix5 << endl;
	cout << endl;
	cout << endl;
	cout << "*= :  " << endl;
	cin >> matrix1;
	cout << matrix1 << endl;
	cin >> matrix2;
	cout << matrix2 << endl;
	matrix1 *= matrix2;
	
	cout << matrix1 << endl;
	cout << endl;
	cout << endl;
	cout << "+= :  " << endl;
	cin >> matrix1;
	cout << matrix1 << endl;
	cin >> matrix2;
	cout << matrix2 << endl;
	matrix1 += matrix2;
	
	cout << matrix1 << endl;
	cout << endl;
	cout << endl;
	cout << "-= :  " << endl;
	cin >> matrix1;
	cout << matrix1 << endl;
	cin >> matrix2;
	cout << matrix2 << endl;
	matrix1 -= matrix2;
	
	cout << matrix1 << endl;
	cout << endl;
	cout << endl;
	cout << "i*Matrix:  " << endl;
	Matrix matrix6;
	cin >> matrix1;
	cout << matrix1 << endl;
	double i = 0;
	cin >> i;
	matrix6 = matrix1 * i;
	
	cout << matrix6 << endl;
	cout << endl;
	cout << endl;
	cout << "Equal or not equal: " << endl;
	cin >> matrix1;
	cout << matrix1 << endl;
	cin >> matrix2;
	cout << matrix2 << endl;
	
	if (matrix1!=matrix2)
	{
		cout << "The matrix1 is not equal to matrix2." << endl;
	}
    if (matrix1 == matrix2)
	{
		cout << "The matrix1 is equal to matrix2." << endl;
	}
	system("pause");
    return 0;
}

