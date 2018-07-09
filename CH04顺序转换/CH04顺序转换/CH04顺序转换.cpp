// CH04顺序转换.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int a,b,c,d,e,f,g;
	scanf_s("%d", &f);
	if (f >= 0 && f < 10)
	{
		g = 1; a =f;
		printf("%d\n",a);
	}
	else if (f >= 10 && f < 100)
	{
		g = 2; a = f / 10; b = f % 10;
		printf("%d %d\n",b,a);
    }
	else if (f >= 100 && f < 1000)
	{
		g = 3; a = f / 100; b = (f % 100) / 10;
		c = f % 10;
		printf("%d %d %d\n",c, b, a);

	}
	else if (f >= 1000 && f < 10000)
	{
		g = 4; a = f / 1000; b = (f % 1000) / 100;
		c = (f % 100) / 10; d = (f % 10);
		printf("%d %d %d %d\n",d, c, b, a);

	}
	else if (f >= 10000 && f < 100000)
	{
		g = 5; a = f / 10000; b = (f % 10000) / 1000;
		c = (f % 1000) / 100; d = (f % 100) / 10; e = f % 10;
		printf("%d %d %d %d %d\n", e, d, c, b, a);
	}
		
	printf("位数是%d\n", g);
   
	system("pause");
	return 0;
}

