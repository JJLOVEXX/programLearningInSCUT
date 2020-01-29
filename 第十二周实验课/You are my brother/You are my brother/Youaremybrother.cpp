#include "stdafx.h"
#include<iostream>
#include<cstring>

using namespace std;

int main()

{

	int n;

	while (cin >> n)

	{

		int a, b, la = 1, lb = 2, da = 0, db = 0;

		for (int i = 1; i <= n; i++)

		{

			cin >> a >> b;

			if (la == a) 
			{
				la = b; 
				da++; 
			}

			if (lb == a) 
			{ 
				lb = b; 
			    db++; 
			}

		}

		if (db<da)
			cout << "You are my elder" << endl;

		else if (db == da)
			cout << "You are my brother" << endl;

		else if (db>da) 
			cout << "You are my younger" << endl;

	}

	return 0;

}


