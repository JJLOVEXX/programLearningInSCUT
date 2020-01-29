#include<iostream>
using namespace std;

void printchar(int, char);
void printchar(int n, char ch)
{
	for (int i = n; i >0; i--)//控制上一行与下一行各自字符输出的数量关系
	{
		//控制缩进空格的for语句与控制每行字符的数量的for语句不是嵌套
		for (int j = n; j >i; j--)//控制每行缩进的空格数
		{
			cout << " " << " "<<" ";
		}
		for (int k = 1; k <= 3 * i - 1; k++)//控制每行输出字符的个数
		{
			cout << ch << " ";
		}
		cout << endl;
	}
}
int main()
{
	int n;
	char ch;
	while(cin >> n >> ch)
	printchar(n, ch);
	system("pause");
	return 0;
}