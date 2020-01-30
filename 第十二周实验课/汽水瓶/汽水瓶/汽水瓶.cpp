#include "stdafx.h"
#include<iostream> 
#include<string>
#include<vector> 
using namespace std;
int main()
{
	int num;
	vector<int>ret;
	while (cin >> num)
	{
		if (num == 0)
			break;
		int sum = 0;
		while (num>2)
		{
			sum += num / 3;
			num = num / 3 + num % 3;
		}
		if (num == 2)
			sum += 1;
		ret.push_back(sum);
	}
	for (int i = 0; i<ret.size(); i++)
		cout << ret[i] << endl;
	return 0;
}

