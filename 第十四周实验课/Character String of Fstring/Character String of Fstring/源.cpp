//#include<iostream>
//using namespace std;
//
//long long Cal(int n)
//{
//	if (n == 1)
//		return 3;
//	else if (n == 2)
//		return 9;
//	long long S = 3, D = 6, s, d;
//	for (int k = 3; k <= n; k++)
//	{
//		s = S, d = D;
//		S = s + d;
//		D = 2 * s + d;
//	}
//	return S + D;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << Cal(n);
//	system("pause");
//	return 0;
//}
#include<iostream> 
#include<cmath>
using namespace std;

int main() {
	int t;
	char arr[16], brr[19];
	cin >> t;


	while (t--)
	{
		cin >> arr;
		for (int i = 0; i<6; i++)
		{
			brr[i] = arr[i];
		}
		brr[6] = '1';
		brr[7] = '9';

		for (int i = 8; i <= 16; i++)
			brr[i] = arr[i - 2];

		int crr[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
		char drr[12] = { '1','0','X','9','8','7','6','5','4','3','2','\0' };

		int sum = 0;
		for (int i = 0; i<17; i++)
			sum = sum + crr[i] * (brr[i] - '0');
		sum %= 11;

		brr[17] = drr[sum];

		brr[18] = '\0';
		cout << brr << endl;
	}
	return 0;
}