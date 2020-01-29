#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;
int main() 
{
	int cnt;
	int start;
	cin >> cnt;
	vector<int> arr(cnt);
	for (int i = 0; i < cnt; i++) 
	{
		cin >> arr[i];
	}
	cin >> start;

	if (start > cnt - 1) 
	{
		cout << "false element";
		return 0;
	}
	for (int i = start; i < cnt; i++)
	{
		cout << arr[i] << " ";
	}
	for (int i = 0; i < start; i++) 
	{
		cout << arr[i] << " ";
	}
	getchar();
	return 0;
}