#include<iostream>
using namespace std;
int main()
{
	int a, b, i;
	i = 1;
	cin >> a >> b;
	while (i >= 1)
	{
		if (i >= a && i >= b && i%a == 0 && i%b == 0)
		{
			cout << i << endl;
			break;
		}
		else
			++i;
	}
	system("pause");
	return 0;
}