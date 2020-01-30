#include <stdio.h>
#include<iostream>
using namespace std;
void printw(char str[])
{
	int i = 0, wfg = 1, lfg = 1;
	int wcnt = 0, lcnt = 0;

	while (str[i])
	{
		if (str[i] != ' '&&str[i] != '\n')
		{
			if (wfg) wcnt++;
			wfg = 0;
		}
		else wfg = 1;

		if (str[i++] != '\n')
		{
			if (lfg) lcnt++;
			lfg = 0;
		}
		else lfg = 1;
	}

	cout << wcnt << endl;
	cout << lcnt;
}
int main(void)
{
	char str[100];
	int i = 0;

	while ((str[i++] = getchar()) != EOF);
	str[i - 1] = 0;
	printw(str);

	return 0;
}