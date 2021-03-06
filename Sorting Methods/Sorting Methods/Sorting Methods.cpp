// Sorting Methods.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<random>
#include<ctime>
using namespace std;

void IncrementBubbleSort(int *);
void DecrementBubbleSort(int *);
void IncrementInsertionSort(int *);
void DecrementInsertionSort(int *);

void IncrementInsertionSort(int *arr)
{
	int insert;
	for (int next = 1; next < 10; ++next)
		{
			insert = arr[next]; 
			int moveItem = next;
			for(; (moveItem > 0) && (arr[moveItem - 1] > insert); moveItem--)
			{
				arr[moveItem] = arr[moveItem - 1];
			} 
			arr[moveItem] = insert; 
		} 
	for (size_t j = 0; j < 10; j++)
	{
		cout << arr[j] << " ";
	}
	cout << endl;
}

void DecrementInsertionSort(int *arr)
{
	int insert;
	for (int next = 1; next < 10; ++next)
	{
		insert = arr[next];
		int moveItem = next;
		for (; (moveItem >0) && (arr[moveItem - 1]< insert); moveItem--)
		{
			arr[moveItem] = arr[moveItem - 1];
		}
		arr[moveItem] = insert;
	}
	for (size_t j = 0; j < 10; j++)
	{
		cout << arr[j] << " ";
	}
	cout << endl;
}
void IncrementBubbleSort(int *arr)
{
	int agent;
	for (size_t j = 0; j< 9; j++)//以数组的第一个数为标签递推下去
	{
		for (size_t i = 0; i<9; i++)//将这个数与其后面每一个数作比较
		{
			if (arr[i] > arr[i + 1])
			{
				agent = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = agent;
			}
		}
	}
	for (size_t i = 0; i < 10; i++)
	{
			cout << arr[i] << " ";
	}
	cout << endl;
}

void DecrementBubbleSort(int *arr)
{
	int agent;
	for (size_t j = 0; j < 9; j++)
	{
		for (size_t i = 0; i < 9; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				agent = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = agent;
			}
		}
	}
	for (size_t i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	srand(time(0));
	int arr[10] = {};
	int n=0;
	cin >> n;
	for (size_t i = 0; i < 10; i++)
	{
		arr[i] = rand();
	}
	for (size_t i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	switch (n)
	{
	case 1:
		IncrementBubbleSort(arr);
		break;
	case 2:
		DecrementBubbleSort(arr);
		break;
	case 3:
		IncrementInsertionSort(arr);
	case 4:
		DecrementInsertionSort(arr);
	default:
		break;
	}
    return 0;
}

