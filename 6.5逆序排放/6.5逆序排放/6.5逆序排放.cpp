// 6.5逆序排放.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
int _tmain(int argc, _TCHAR* argv[])
{
	int a[5];
	int i;
	printf("正序是：\n");
	for ( i = 0; i < 5; i++)
		scanf_s("%d", &a[i]);
	printf("逆序是：\n");
	for (int j = 4; j>=0; j--)
		printf("%d ", a[j]);
	printf("\n");
	system("pause");
	return 0;
}

