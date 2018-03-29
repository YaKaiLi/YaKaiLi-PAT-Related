// 1068.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int thisis(int input) {
	int cha = 0;
	int jiaohuan = 0;
	cha = input - 36;
	jiaohuan = (input % 10) * 10 + (input / 10);
	if (jiaohuan == cha)
		return 1;
	else
		return 0;
}

int main()
{
	int countOfthis = 0;
	for (int i = 36; i < 100; i++) {
		if (thisis(i))countOfthis++;
	}
	cout << countOfthis;
	getchar();
	getchar();
    return 0;
}

