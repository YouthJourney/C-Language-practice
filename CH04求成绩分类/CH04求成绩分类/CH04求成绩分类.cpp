// CH04求成绩分类.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int g;
	char a;
	scanf_s("%d", &g);
	if (g <= 100 && g >= 90)
		a = 'A';
	else if (g <= 89 && g >= 80)
		a = 'B';
	else if (g <= 79 && g >= 70)
		a = 'C';
	else if (g <= 69 && g >= 60)
		a = 'D';
	else if (g >= 0 && g <= 59)
		a = 'E';
	     
		

	printf("%c\n", a);

    system("pause");
	return 0;
}

