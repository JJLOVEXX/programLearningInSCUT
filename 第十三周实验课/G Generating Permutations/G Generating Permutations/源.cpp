#include<iostream> 
#include<algorithm> 
using namespace std;
int main()
{
	int m = 1;
	cin >> m;
	if (m >= 1 && m <= 9)
	{

		int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
		do {
			for (int i = 0; i < m; ++i)
				cout << a[i] << " ";
			cout << endl;
		} while (next_permutation(a, a + m)); //�����a+m��˼��a[0]��a[m-1]��Ԫ������ 
	}
	system("pause");
}
