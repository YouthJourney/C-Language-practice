// CH04求方程实根。.cpp : 定义控制台应用程序的入口点。
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
		printf("有实根：\nx1=%.2f\nx2=%.2f\n", x1, x2);

	}
	else
		printf("无实根。");

	system("pause");
	return 0;
}

