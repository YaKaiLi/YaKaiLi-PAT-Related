// 1073.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char str[1000] = { 0 };
	int num[50] = { 0 };
	gets_s(str);
	int i;
	int k = 0;
	/*
	while((c=getchar())!='\n') //流中一个字符一个字符判断，直到换行，输入结束
    {
        if(c != ' ')  
        {
            ungetc(c,stdin);//如果字符c不是空格，就要将c字符还回到流中，不然造成数据读取错误
            cin>>nArr[i++];//流输入会将第一个数据全读入，直到遇到空格
        }
    }
	*/
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			k = (int)str[i] - 97;
			num[k]++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			k = (int)str[i] - 97;
			num[k]++;
		}
	}
	int max = 0, max_i = 0;
	for (i = 0; i < 30; i++)
	{
		if (num[i] > max)
		{
			max = num[i];
			max_i = i;
		}
	}
	printf("%c %d\n", 'a' + max_i, max);
	return 0;
}

