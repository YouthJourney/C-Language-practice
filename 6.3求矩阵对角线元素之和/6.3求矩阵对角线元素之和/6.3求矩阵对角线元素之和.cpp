// 6.3�����Խ���Ԫ��֮��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%5d", a[i][j]);
		printf("\n");

	}
	int s = a[0][0] + a[0][2];
	int m = a[2][0] + a[2][2];
	int n = s + m + a[1][1];

	printf("sum=%d\n", n);
	
	system("pause");
	return 0;
}

