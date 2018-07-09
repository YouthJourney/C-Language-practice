// CH04求闰年.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int year;
	scanf_s("%d",& year);
	/*if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				printf("ture");
			else
				printf("false");
        }
		else
			printf("ture");

	}
	else
		printf("ture");*/
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("%d is a leap year.\n", year);
	else
		printf("%d is not a leap year.\n", year);
	

	system("pause");
	return 0;
}

