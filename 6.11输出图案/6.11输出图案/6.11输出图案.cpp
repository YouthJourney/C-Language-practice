// 6.11输出图案.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	char c[10] = { '*', ' ', '*', ' ', '*', ' ','*',' ','*' };

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
			printf("  ");
		for (int m = 0; m < 10; m++)
			printf("%c", c[m]);
		printf("\n");
		

	}


	system("pause");
	return 0;
}

