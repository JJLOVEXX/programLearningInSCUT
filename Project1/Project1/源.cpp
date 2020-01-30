#include<iostream>
#include<array>
using namespace std;

/*int main()
{
	/*int c[100] = {1,2,3};
	int sum = 0;
	for (int i = 0; i<100; i++)
	{
		cout << c[i]<<endl;
		sum += c[i];
	}
	cout << sum;*/
	/*double a[11] = { 1,2,3,4,5,6 }, b[34] = {0};

	for (int i = 0; i < 11; i++)
	{
		b[i] = a[i];
		cout << a[i] << endl;
		cout << b[i] << endl;
	}*/
	float w[99] = { -1,1,2,3,4,5,6,7,8,9,100 };
	float max(float);
float max(float m)
{
	m = 0;
	for (size_t i = 0; i < 99; i++)
	{
		

		if (w[i] > m)
		{
			m = w[i];
		}
	}
	return m;
}
	float min(float);
float min(float n)
	{
	n = 0;
		for (size_t i = 0; i < 99; i++)
		{

			if (w[i] < n)
			{
				n = w[i];
			}
		}
		return n;
	}
int main() 
{
	
	cout<<max(*w)<<endl;
	cout<<min(*w)<<endl;

	system("pause");
	return 0;
}
