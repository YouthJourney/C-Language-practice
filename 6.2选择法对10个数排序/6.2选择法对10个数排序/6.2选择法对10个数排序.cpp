// 6.2ѡ�񷨶�10��������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int a[10];
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);

	for (int j = 0; j < 9; j++)
	{
		for (int i = 0; i < 9 - j; i++)
		{
			if (a[i]>a[i + 1])
			{
				int t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}
	printf("so the sorted numble:\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);

	printf("\n");

	system("pause");
	return 0;
}

