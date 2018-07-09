// CH05Fibonacci.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int f1 = 1, f2 = 1;
	//printf("%12d\n%12d\n", f1, f2);
	/*for (int i = 3; i <= 40; i++)
	{
		int f3 = f1 + f2;
		printf("%12d\n", f3);
		f1 = f2;
		f2 = f3;


	}*/
	for (int i = 1; i <= 20; i++)
	{
		printf("%12d %12d", f1, f2);
		if (i%4==0)
			printf("\n");
		f1 = f1 + f2;
		f2 = f2 + f1;

	}
	system("pause");
	return 0;
}

