// CH04sgn����.cpp : �������̨Ӧ�ó������ڵ㡣
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

