// CH04两个数排序。.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	float a, b, c, t;
	scanf_s("%f %f %f", &a, &b,&c);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c);
	{
		t = a;
		a = c;
		c = t;
	}
	if (b > c);
	{
		t = b;
		b = c;
		c = t;
	}

	
	printf("%.2f\n%.2f\n%.2f\n", a, b, c);

	system("pause");
	return 0;
}

