// CH05��1��100�ĺ�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int i = 1, sum = 0;
	do
	{
		sum = sum + i;
		i++;
	} while (i <= 100);

	printf("sum=%d\n",sum);

	system("pause");
	return 0;
}

