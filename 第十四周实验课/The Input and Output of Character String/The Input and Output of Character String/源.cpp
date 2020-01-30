#include<iostream>
using namespace std;
int main()
{
	int n, i;
	char str[1000];

	cin >> n;
	cin.getline(str, 2);
	cin.getline(str, 1000);
	cout << str << endl;
	for (i = 1; i< n; i++)
	{
		cin.getline(str, 1000);
		cout << endl << str << endl;
	}
	while (cin >> str)
		cout << endl << str << endl;
	return 0;
}