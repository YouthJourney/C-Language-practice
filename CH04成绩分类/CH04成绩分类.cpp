// CH04�ɼ�����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	float g;

	scanf_s("%f", &g);
	if (g <= 100 && g >= 85)
		printf("A\n");
	else if (g <= 84 && g >= 70)
		printf("B\n");
	else if (g <= 69 && g >= 60)
		printf("C\n");
	else if (g < 60 && g>= 0)
		printf("D\n");
	else
		printf("You have input false number.\n");

	system("pause");
	return 0;
}

