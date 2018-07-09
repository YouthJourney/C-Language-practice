// CH05求累加和.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	
	double a, k;
	double s = 0;
	for (k = 1; k <= 100; k++)
		s = s + k;
	for (k = 1; k <= 50; k++)
		s = s + k*k;
	for (k = 1; k <= 10; k++)
		s = s + 1 / k;
	printf("k+k^2+1/k=%lf\n", s);

	system("pause");
	return 0;
}

