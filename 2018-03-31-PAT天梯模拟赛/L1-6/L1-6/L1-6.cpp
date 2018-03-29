// L1-6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float height=0;
	float weight=0;
	cin>>height;
	weight = (height - 100)*0.9*2;
	printf("%.1f",weight);
	return 0;
}

