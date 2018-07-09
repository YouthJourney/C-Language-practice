// CH05求1到100的和.cpp : 定义控制台应用程序的入口点。
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

