#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vec;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int value;
		cin >> value;
		vec.push_back(value);
	}
	int index = 0;
	for (int i = 1; i < n; i++)
	{
		if (vec[index] != vec[i])
			vec[++index] = vec[i];
	}
	for (int i = 0; i < index + 1; i++)
		cout << vec[i] << " ";
	cout << endl;
	cout << index + 1 << endl;
	system("pause");
	return 0;
}