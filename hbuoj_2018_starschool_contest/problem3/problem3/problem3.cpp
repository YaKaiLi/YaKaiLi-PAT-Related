// problem3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t, n;
	int a;
	cin >> t;
	while (t--)
	{
		cin >> a;
		n = 1;
		if (a <= 10)
		{
			cout << "1" << endl;
			continue;
		}
		while (a >= 10)
		{
			a += 5;
			a /= 10;
			n *= 10;
		}
		cout << a * n << endl;
	}
	return 0;
}

