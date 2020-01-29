#include "stdafx.h"

#include <cstdio>
using namespace std;



int main()
{
	int C, N;
	int array[1000];
	scanf_s("%d", &C);//输入整数C
	for (int i = 0; i < C; i++)
	{
		scanf_s("%d", &N);//输入整数N
		double sum = 0.0, average, per;
		for (int j = 0; j < N; j++)//输入N个分数
		{
			scanf_s("%d", &array[j]);
			sum += array[j];
		}
		average = sum / N;//求出平均数
		per = 0;
		for (int j = 0; j < N; j++)
		{
			if ((float)array[j] > average)//如果分数大于平均数，per加1
				per = per + 1.0;
		}
		printf("%.3f%%\n", (per / N) * 100);//输出百分比
	}
	return 0;
}