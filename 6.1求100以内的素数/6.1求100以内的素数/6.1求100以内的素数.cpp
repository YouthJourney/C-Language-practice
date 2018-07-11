// 6.1求100以内的素数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int a[100];
	int i;
	for ( i = 0; i < 100; i++)
		a[i] = i+1;
	printf("the prime numble:\n");
	for (int i = 0; i < 100; i++)
	{
		int k = sqrt(a[i]);
		int n;
		for (n = 2; n <= k; n++)
		{
			if (a[i] % n == 0)
				break;
		}
		if (n > k)
			printf("%d ", a[i]);
		 
		
	}
	printf("\n");
	system("pause");
	return 0;
}

