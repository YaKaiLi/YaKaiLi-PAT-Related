// 1073.cpp : �������̨Ӧ�ó������ڵ㡣
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
	while((c=getchar())!='\n') //����һ���ַ�һ���ַ��жϣ�ֱ�����У��������
    {
        if(c != ' ')  
        {
            ungetc(c,stdin);//����ַ�c���ǿո񣬾�Ҫ��c�ַ����ص����У���Ȼ������ݶ�ȡ����
            cin>>nArr[i++];//������Ὣ��һ������ȫ���룬ֱ�������ո�
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

