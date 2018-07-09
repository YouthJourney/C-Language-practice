// CH04sgn函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	float x, y;
	scanf_s("%f",&x);
	if (x > 0)
		y = 1;
	else
	if (x < 0)
		y = -1;
	else
		y =0;
	printf("%.1f\n", y);

	system("pause");
	return 0;
}

