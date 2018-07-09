// CH04switch语句的应用.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	void action1(int, int), action2(int, int);
	char c;
	int a = 15;
	int b = 23;
	
	c = getchar();
	switch (c)
	{
	case'a':
	case'A':action1(a, b); break;
	case'b':
	case'B':action2(a, b); break;

	default:putchar('\a');
	}
	system("pause");
	return 0;
}
void action1(int x, int y)
{
	printf("x+y=%d\n", x + y);
}
void action2(int x, int y)
{
	printf("x*y=%d\n", x*y);
}




	