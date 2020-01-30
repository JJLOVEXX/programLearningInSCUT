#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int N, AH, AM, AS, BH, BM, BS;
	cin >> N;
	while (N--)
	{
		cin >> AH >> AM >> AS >> BH >> BM >> BS;
		BS += AS;
		BM += (AM + BS / 60);
		BH += (AH + BM / 60);
		cout << BH << " " << (BM % 60) << " " << (BS % 60) << endl;
	}
	return 0;
}
