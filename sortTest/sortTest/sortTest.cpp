// sortTest.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<random>
#include<ctime>
#include<iostream>

using namespace std;

void insertSort(int[],int);
void selectionSort(int[], int);
void swap(int [],int, int);

int main()
{
	const int size = 100;
	int a[size];
	for (size_t i = 0; i < size; i++)
	{
		a[i] = rand()%1000;
	}
	/*insertSort(a, size);
	selectionSort(a, size);*/
	for (size_t i = 0; i < size; i++)
	{
		if ((i+1)%10!=0)
		{
			cout << a[i] << " ";
		}
		else
		{
			cout << a[i] << endl;
		}
	}
    return 0;
}

void insertSort(int array[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = i; j >0&&array[j-1]>array[j]; j--)
		{
			swap(array, j - 1, j);
		}
	}
}

void selectionSort(int array[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		int minindex = i;
		for (size_t j = n-1; j >i; j--)
		{
			if (array[j]<array[minindex])
			{
				minindex = j;
			}
		}
		swap(array, i, minindex);
	}
}

void swap(int array[],int a, int b)
{
	int temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}
