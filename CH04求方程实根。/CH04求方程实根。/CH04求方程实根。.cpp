// CH04�󷽳�ʵ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	double a, b, c, d, x1, x2, p, q;
	scanf_s("%lf%lf%lf", &a, &b, &c);
	d = b*b - 4 * a*c;
	if (d > 0)
	{
		p = -b / (2 * a);
		q = sqrt(d) / (2 * a);
		x1 = q + p; x2 = p - q;
		printf("��ʵ����\nx1=%.2f\nx2=%.2f\n", x1, x2);

	}
	else
		printf("��ʵ����");

	system("pause");
	return 0;
}

