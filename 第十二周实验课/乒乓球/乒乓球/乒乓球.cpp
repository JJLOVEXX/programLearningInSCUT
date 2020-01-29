#include "stdafx.h"
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
	int s1 = 0, s2 = 0;
	char c;
	vector<char> v;
	while (cin >> c)
	{
		if (c == 'E')
			break;
		if (c == 'W' || c == 'L')
			v.push_back(c);
	}
	if (v.empty())
	{
		cout << "0:0" << endl << endl << "0:0" << endl;
		return 0;
	}
	for (int i = 0; i <= v.size() - 1; i++)
	{
		if (v[i] == 'W')
			s1++;
		if (v[i] == 'L')
			s2++;
		if ((s1 >= 11 || s2 >= 11) && abs(s1 - s2) >= 2)//必须加括号，短路求值原理
		{
			cout << s1 << ':' << s2 << endl;
			s1 = s2 = 0;
		}
		if (i == v.size() - 1)
			cout << s1 << ':' << s2 << endl;
		if (i == v.size() - 1 && (s1 >= 11 || s2 >= 11) && abs(s1 - s2) >= 2)
			cout << "0:0" << endl;
	}
	cout << endl;
	s1 = s2 = 0;
	for (int i = 0; i <= v.size() - 1; i++)
	{
		if (v[i] == 'W')
			s1++;
		if (v[i] == 'L')
			s2++;
		if ((s1 >= 21 || s2 >= 21) && abs(s1 - s2) >= 2)
		{
			cout << s1 << ':' << s2 << endl;
			s1 = s2 = 0;
		}
		if (i == v.size() - 1)
			cout << s1 << ':' << s2 << endl;
		if (i == v.size() - 1 && (s1 >= 21 || s2 >= 21) && abs(s1 - s2) >= 2)
			cout << "0:0" << endl;
	}
	return 0;
}