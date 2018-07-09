// CH05译密码.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	char c = getchar();
	while (c!='\n'
		)
	{
		if ((c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'Z'))
		{
			if (c >= 'W'&&c <= 'Z' || c >= 'w'&&c <= 'z')
				c = c - 22;
			else
				c = c + 4;
		}
		printf("%c", c);
		c = getchar();
	}
	printf("\n");
	system("pause");
	return 0;
}

