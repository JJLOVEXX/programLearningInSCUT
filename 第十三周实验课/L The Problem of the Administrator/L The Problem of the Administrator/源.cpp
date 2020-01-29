#include<cstdio>  
#include<algorithm>  
#include<cstring>  
using namespace std;
struct node
{
	int a, b;
}p[5001];
int dp[5001];
bool cmp(node x, node y)
{
	if (x.b != y.b) return x.b<y.b;
	else return x.a<y.a;
}
int main()
{
	int n, i, j, ans, m;
	scanf("%d", &n);
	if (n <= 10000)
	{
		for (i = 0; i<n; i++)
			scanf("%d%d", &p[i].a, &p[i].b);
		sort(p, p + n, cmp);
		memset(dp, 0, sizeof(dp));
		ans = -1;
		for (i = 0; i<n; i++)
		{
			m = 0;
			for (j = 0; j<i; j++)
			{
				if (p[i].a >= p[j].b&&m<dp[j])
					m = dp[j];
			}
			dp[i] = p[i].b - p[i].a + m;
			if (dp[i]>ans) ans = dp[i];
		}
		printf("%d\n", ans);
	}
	return 0;
}