// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>


using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	while (n--)
	{
		int m=0, w=0;
		cin >> m >> w;
		int *p = new int[m];
		int *o = new int[w];
		int *r = new int[m + w];
		int *e = new int[m + w];
		for (size_t i = 0; i < m; i++)
		{
			cin >> p[i];
		}
		for (size_t i = 0; i < w; i++)
		{
			cin >> o[i];
		}
		for (size_t i = 0; i < m+w; i++)
		{
			r[i] = 0;
		}
		for (size_t i = 0; i < m + w; i++)
		{
			e[i] = 0;
		}
		if (m<w)
		{
			for (size_t i = 0; i < m; i++)
			{
				for (size_t j = 0; j <i ; j++)
				{
					if (p[i]==o[j])
					{
						r[j] = p[j];
					}
					else
					{
						
					}
				}

			}
			for (size_t i = 0; i < m + w; i++)
			{
				if (r[i] != 0)
				{
					cout << "Yes";
					cout << endl;
					break;
				}
				else
				{
					cout << "No";
					cout << endl;
					break;
				}
			}
		}
		else
		{
			for (size_t i = 0; i < w; i++)
			{
				for (size_t j = 0; j <i; j++)
				{
					if (p[i] == o[j])
					{
						e[j] = o[j];
					}
					else
					{

					}
				}
			
			}
			for (size_t i = 0; i < m + w; i++)
			{
				if (e[i] != 0)
				{
					cout << "Yes";
					cout << endl;
					break;
				}
				else
				{
					cout << "No";
					cout << endl;
					break;
				}
			}
		}
	}
	system("pause");
    return 0;
}

