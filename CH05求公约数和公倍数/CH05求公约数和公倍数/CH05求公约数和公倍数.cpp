// CH05求公约数和公倍数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream >

int _tmain(int argc, _TCHAR* argv[])
{
	int m, n,a,b,c;
	int max(int x);
	scanf_s("%d%d", &m, &n);
	for (a = 1; a <= m&&a <= n; a++)
	{
		if (m % a == 0 && n % a == 0)
			c = max(a);
			printf("%d\n", a);
	}
	b = m*n;
	printf("%d\n", b);

	system("pause");
	return 0;
}

