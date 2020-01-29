#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int *p = new int[n];
	*p = 1;
	*(p + 1) = 1;
	cout << *p << "   " << *(p + 1) << "   ";
	p = p + 2;
	for (int i = 3; i <= n; i++)
	{

		*(p) = *(p - 1) + *(p - 2);
		cout << *p << "   ";
		p++;
		if (i % 5 == 0)
			cout << "\n";
	}
	return 0;
}