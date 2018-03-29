// 1073.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char str[1000] = { 0 };
	int num[100] = { 0 };
	gets_s(str);
	int k = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		k = (int)str[i] - 97;
		cout << k << endl;
		num[k]++;
		if (num[k] >= 3) {
			cout << str[i] << endl;
			getchar();
			getchar();
			return 0;
		}
	}
	return 0;
}

/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
string str;
int nArrChar[256] = {0};//对应ASCII码
getline(cin,str);
for(int i=0;i<str.length();i++)
{
if(++nArrChar[str[i]] == 3)//对应的码位+1
{
if( str[i]>='a' &&str[i]<='z' || str[i]>='A' && str[i]<='Z') //确定是英文字母则输出
{
cout<<str[i]<<endl;
break;
}
}
}
return 0;
}
*/