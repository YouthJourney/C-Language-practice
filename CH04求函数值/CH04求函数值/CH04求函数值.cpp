// CH04����ֵ.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	float x, y;
	scanf_s("%f", &x);
	if (x < 1)
		y = x;
	else if (x >= 1 && x < 10)
		y = 2 * x - 1;
	else if (x >= 10)
		y = 3 * x - 11;

	printf("%.2f\n", y);

	system("pause");
    return 0;
}

