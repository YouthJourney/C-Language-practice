// CH04��һ������ƽ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b;
	scanf_s("%d", &a);
	if (a < 1000)
	{
		b = sqrt(a);
		printf("%d\n", b);
	}

	else
		printf("please input the ture data again!\n");

	system("pause");
	return 0;
}

