// CH05判断一个数为素数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	int i, n,k;
	scanf_s("%d", &n);
	/*for (i = 2; i < n;i++)
	if (n%i == 0)
		break;
	if (i<n)
		printf("%d is not a prime number.\n",n);
	else
		printf("%d is a prime number.\n", n);
*/
	k = sqrt(n);
	for (i = 2; i <= k;i++)
	if (n%i == 0)
		break;
	if (i<=k)
		printf("%d is not a prime number.\n", n);
	else
		printf("%d is a prime number.\n", n);






	system("pause");
	return 0;
}

