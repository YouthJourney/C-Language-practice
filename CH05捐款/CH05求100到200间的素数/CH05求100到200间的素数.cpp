// CH05求100到200间的素数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	int k,n,i,m=0;
	for (n = 101; n <= 200; n += 2)
	{

		k = sqrt(n);
		for (i = 2; i <= k; i++)
		if (n%i == 0)
			break;
		if (i > k)
		{
			printf("%d ", n);
			m += 1;
		}
		if (m % 10 == 0)
			printf("\n");
		
	}




	system("pause");
	return 0;
}

