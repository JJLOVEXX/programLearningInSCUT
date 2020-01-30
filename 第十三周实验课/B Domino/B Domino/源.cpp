# include<stdio.h> 
int main()
{
	int n, num, i;
	int a1, a2, a3;
	while (scanf("%d", &n) && n)
	{
		a1 = 1; a2 = 2; a3 = 4;
		if (n <= 2)
		{
			printf("%d\n", n);
			continue;
		} for
			(i = 4; i <= n; i++)
		{
			num = a3; a3 = a1 + a2 + a3; a1 = a2; a2 = num;
		}
		printf("%d\n", a3);
	}
	return 0;
}
