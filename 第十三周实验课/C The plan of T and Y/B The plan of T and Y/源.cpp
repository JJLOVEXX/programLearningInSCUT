#include<cstdio>
#include<cmath>

struct s
{
	double x,y,z;
}
a, b, c, point[5000];

double fun1(double x)

{
	return x*x;
}
double fun2(struct s d)

{
	return fun1(c.x - d.x) + fun1(c.y - d.y) + fun1(c.z - d.z);
}
int main()

{
	int i, n, k = 0;
	double min, t;
	scanf("%d", &n);
    for(i= 0;i<n;i++)
	{
		scanf("%lf %lf %lf", &point[i].x, &point[i].y, &point[i].z);
	}
	scanf("%lf %lf %lf", &a.x, &a.y, &a.z);
	scanf("%lf %lf %lf", &b.x, &b.y, &b.z);
	c.x = (a.x + b.x) / 2;
	c.y = (a.y+ b.y) / 2;
	c.z = (a.z+ b.z) / 2;
	min = fun2(point[0]);

	for(i= 1;i<n;i++)

	{
		t= fun2(point[i]);
		if(t<min)
		{
			min= t;
			k= i;
		}
	}
	printf("%.3lf %.3lf %.3lf\n", point[k].x, point[k].y, point[k].z);
	return 0;
}