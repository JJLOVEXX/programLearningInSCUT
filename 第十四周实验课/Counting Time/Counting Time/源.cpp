#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	if (n == 0)
	{
		cout << "go!";
	}
	if (n > 0 && n <= 100)
	{
		for (size_t i = n; i >0; i--)
		{
			cout << i << endl;
		}
		cout << "go!";
	}
	system("pause");
	return 0;
}