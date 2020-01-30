#include<iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
	const int arraysize = 10;
	double fractions[arraysize] = { 0.0 };
	fractions[3];
	fractions[4];
	fractions[9] = 1.667;
	fractions[6] = 3.333;
	cout << fixed << setprecision(2);
	cout << fractions[6] <<' '<< fractions[9]<<endl;
	for (size_t i = 0; i <10; i++)
	{
		cout << fractions[i]<<endl;
	}
	system("pause");
	return 0;
}