// CH04�����������ֵ.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int max(int x, int y, int z);
	int a, b, c, d;
	scanf_s("%d%d%d", &a, &b, &c);
	d = max(a, b, c);
	printf("max=%d\n", d);
	system("pause");
	return 0;
}

int max(int x, int y, int z)
{	
	int m;
	if (x > y)m = x;
	else m = y;
	if (x > z)m = x;
	else m = z;
	if (y > z)m = y;
	else m = z;
	return(m);
}





