// 6.6�������������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < i+1; j++)
			printf(" 1 ");
		printf("\n");
	}

	system("pause");
	return 0;
}

