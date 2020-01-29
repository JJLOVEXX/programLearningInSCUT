#include<iostream> 
#include<cstdio> 
#include<cstring> 
using namespace std;
int a[205];
int main()
{
	int t, n;
	scanf("%d", &t);
	while (t--)
	{
		memset(a, 0, sizeof(a));
		int start, finish;
		scanf("%d", &n);
		for (int i = 0; i<n; i++)
		{
			scanf("%d%d", &start, &finish);
			if (start>finish)
			{
				swap(start, finish);
			}
			start = (start + 1) / 2;
			finish = (finish + 1) / 2;
			for (int j = start; j <= finish; j++)
			{
				a[j]++;
			}
		}
		int MAX = 0;
		for (int i = 0; i<205; i++)
		{
			if (a[i]>MAX)
			{
				MAX = a[i];
			}
		}
		printf("%d\n", MAX * 10);
	}
	return 0;
}

