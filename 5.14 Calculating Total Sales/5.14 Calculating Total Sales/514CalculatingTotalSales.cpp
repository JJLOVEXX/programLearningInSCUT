#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;//�������������
	int number = 0;//�����Ʒ���벢��ʼ��
	double sum = 0;//����������

	cout << "Please enter a right number(or -1 to quit):";
	cin >> number;//�����Ʒ����

	while(number!=-1)//���Ʋ�Ʒ��������
	{
	switch (number)//��·ѡ�����
		{
		case 1:
			++count1;
			break;
		case 2:
			++count2; 
			break;
		case 3:
			++count3;
			break;
		case 4:
			++count4;
			break;
		case 5 :
			++count5;
			break;
		//�����������
			default:
				cout << "You enter a wrong number"
					<< "\nPlease enter again       ";
			break;
			
		}

		cout << "\nPlease enter a right number(or -1 to quit):";
		cin >> number;

	}

	cout << count1 << " " << count2 << " " << count3 << " " << count4 << " " << count5 << endl;//���������
	sum = count1 * 2.98 + count2 * 4.50 + count3 * 9.98 + count4 * 4.49 + count5 * 6.87;//����������
	cout << "The total retail value of all products is:   " << sum;//���������

	system("pause");
    return 0;
}

