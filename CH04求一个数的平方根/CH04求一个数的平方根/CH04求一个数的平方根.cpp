// CH04求一个数的平方根.cpp : 定义控制台应用程序的入口点。
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

