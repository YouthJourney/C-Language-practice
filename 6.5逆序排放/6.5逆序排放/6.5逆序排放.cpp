// 6.5�����ŷ�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
int _tmain(int argc, _TCHAR* argv[])
{
	int a[5];
	int i;
	printf("�����ǣ�\n");
	for ( i = 0; i < 5; i++)
		scanf_s("%d", &a[i]);
	printf("�����ǣ�\n");
	for (int j = 4; j>=0; j--)
		printf("%d ", a[j]);
	printf("\n");
	system("pause");
	return 0;
}

