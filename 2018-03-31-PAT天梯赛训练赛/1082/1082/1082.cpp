// 1082.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int a[2] = { 0,1 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				for (int m = 0; m < 2; m++) {
					for (int n = 0; n < 2; n++) {
						cout << a[i] << a[j] << a[k] << a[m] << a[n] << endl;
					}
				}
			}
		}
	}
	getchar();
	getchar();
    return 0;
}

