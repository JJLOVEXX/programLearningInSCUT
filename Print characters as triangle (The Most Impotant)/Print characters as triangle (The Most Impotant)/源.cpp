#include<iostream>
using namespace std;

void printchar(int, char);
void printchar(int n, char ch)
{
	for (int i = n; i >0; i--)//������һ������һ�и����ַ������������ϵ
	{
		//���������ո��for��������ÿ���ַ���������for��䲻��Ƕ��
		for (int j = n; j >i; j--)//����ÿ�������Ŀո���
		{
			cout << " " << " "<<" ";
		}
		for (int k = 1; k <= 3 * i - 1; k++)//����ÿ������ַ��ĸ���
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