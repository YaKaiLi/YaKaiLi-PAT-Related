// 1079.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int input[1000] = { 0 };
	int numberOfinput = 0;
	int haveji = 0,haveo = 0;
	while (cin >> input[numberOfinput]) {
		numberOfinput++;
	}
	/*
	for (int i = 0; i < numberOfinput; i++) {
		if (input[i] % 2 != 0) {
			if (haveji != 0) cout << " ";
			haveji = 1;
			cout<<input[i];
		}
		cout << endl;
	}
	for (int i = 0; i < numberOfinput; i++) {
		if (input[i] % 2 == 0) {
			if (haveo != 0) cout << " ";
			haveo = 1;
			cout << input[i];
		}
		cout << endl;
	}
	*/
	for (int i = 0; i < numberOfinput; i++) {
		if (input[i] % 2 != 0) {
			cout << input[i]<<" ";
		}
	}
	cout << endl;
	for (int i = 0; i < numberOfinput; i++) {
		if (input[i] % 2 == 0) {
			cout << input[i]<<" ";
		}
	}
	getchar();
	getchar();
    return 0;
}

