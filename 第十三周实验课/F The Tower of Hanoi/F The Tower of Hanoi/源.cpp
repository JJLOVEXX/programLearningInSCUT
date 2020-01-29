#include <iostream> 
using namespace std;
void hanoi(int n, char a, char b, char c)
{ /* 如果剩下一个盘子，直接从a-->c */
	if (1 == n)
	{
		cout << "Move disk " << n << " from " << a << " to " << c << endl;
	}
	else
	{
		/* 把n-1个盘子从a移动到b借助于c */
		hanoi(n - 1, a, c, b);
		/* 把第n和盘子从a移动c */
		cout << "Move disk " << n << " from " << a << " to " << c << endl;
		/* 把n-1个盘子从b移动到c借助于a */
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
