// 6.6输入杨辉三角形.cpp : 定义控制台应用程序的入口点。
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

