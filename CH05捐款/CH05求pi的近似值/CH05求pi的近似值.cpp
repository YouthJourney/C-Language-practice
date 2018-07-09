// CH05求pi的近似值.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0, n = 1;
	double pi = 0,a = 1 ,c=1;
	while (fabs(a) >= 1e-6)
	{
		pi = pi + a;
		i++;
		n = n + 2;
		c = -c;
		a = c / n;
	}
	pi = 4 * pi;
	printf("次数是%d\npi=%lf", i, pi);
	
	system("pause");
	return 0;
}

