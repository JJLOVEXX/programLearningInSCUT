// Matrix Class.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Matrix.h"
#include<iostream>

using namespace std;

int main()
{
	double a, b, c, d, e, f, g, h;
	Matrix matrix1(1, 0, 0, 1);
	cout << "The matrix1 is: " << endl;
	matrix1.printMatrix();
	Matrix matrix2(1, 0, 0, 1);
	cout << "The matrix2 is: " << endl;
	matrix1.printMatrix();
	cout << "Please input the first matrix: " << endl;
	cin >> a >> b >> c >> d;
	matrix1.setMatrix(a,b,c,d);
	cout << "The first matrix is: " << endl;
	matrix1.printMatrix();
	cout << "Please input the second matrix: " << endl;
	cin >> e >> f >> g >> h;
	matrix2.setMatrix(e, f, g, h);
	cout << "The second matrix is: " << endl;
	matrix2.printMatrix();
	Matrix matrix3(0,0,0,0);
	matrix3 = matrix1 + matrix2;
	cout << "The third matrix(addition:matrix1+matrix2) is: " << endl;
	matrix3.printMatrix();
	matrix3 = matrix1 - matrix2;
	cout << "The third matrix(subtraction:matrix1-matrix2) is: " << endl;
	matrix3.printMatrix();
	if (matrix1!=matrix2)
	{
		cout << "Matrix1 is not equal to matrix2." << endl;
	}
	else if (matrix1 == matrix2)
	{
		cout << "Matrix1 is equal to matrix2." << endl;
	}
	system("pause");
    return 0;
}

