// CH05���.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int total=0, a ,i;
	for ( i = 1; i<=1000; i++)
	{
		scanf_s("%d",& a);
		total += a;
		if (total >= 100000)
			break;
    }
	printf("num=%d\naver=%d\n", i, total / i);
	system("pause");
	return 0;
}

