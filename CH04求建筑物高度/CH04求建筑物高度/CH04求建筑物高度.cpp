// CH04������߶�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	float x, y,h;
	scanf_s("%f%f", &x, &y);
	if ((x - 2)*(x - 2) + (y - 2)*(y - 2)<= 1)
		h = 10;
	else
		h = 0;
	printf("%.1f", h);

	system("pause");
	return 0;
}

