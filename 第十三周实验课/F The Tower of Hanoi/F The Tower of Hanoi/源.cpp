#include <iostream> 
using namespace std;
void hanoi(int n, char a, char b, char c)
{ /* ���ʣ��һ�����ӣ�ֱ�Ӵ�a-->c */
	if (1 == n)
	{
		cout << "Move disk " << n << " from " << a << " to " << c << endl;
	}
	else
	{
		/* ��n-1�����Ӵ�a�ƶ���b������c */
		hanoi(n - 1, a, c, b);
		/* �ѵ�n�����Ӵ�a�ƶ�c */
		cout << "Move disk " << n << " from " << a << " to " << c << endl;
		/* ��n-1�����Ӵ�b�ƶ���c������a */
		hanoi(n - 1, b, a, c);
	}
}
int main()
{
	unsigned int num = 0;
	cin >> num;
	if (num <= 10)
	{
		hanoi(num, 'A', 'B', 'C');
	}
	system("pause");
	return 0;
}
