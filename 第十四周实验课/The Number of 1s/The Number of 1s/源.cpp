#include<iostream>
using namespace std;
int main()
{
	int a, s[20], i = 0, rem;
	int e;
	while (cin >> a)

	{
		if (a >= 0 && a <= 100000)
		{
			if (a == 0)
			{
				e = 0;
			}
			while (a)
			{
				e = 0;
				rem = a % 2;
				a = a / 2;
				s[i++] = rem;
			}
			while (i > 0)
			{
				if (s[i - 1] == 1)
				{
					e++;
				}
				i--;
			}
			cout << e << endl;
		}
	}
	system("pause");
	return 0;
}
