// 1067.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//每个人都是最优
	int scoreOfschool[6] = {0};
	int scoreOfpar[20] = { 0 };
	int numberOfpar = 0;
	int now=5;
	int countOfpar = 0;
	cin >> numberOfpar;
	cin >> scoreOfschool[0];
	cin >> scoreOfschool[1];
	cin >> scoreOfschool[2];
	cin >> scoreOfschool[3];
	cin >> scoreOfschool[4];
	scoreOfschool[5] = 0;
	for (int i = 0; i <= numberOfpar; i++) {
		cin >> scoreOfpar[i];
	}
	for (int i = 0; i < 5; i++) {
		if ((scoreOfschool[i] >= scoreOfschool[now]) && (scoreOfschool[i] <= scoreOfpar[0]))
			now = i;
	}
	for (int i = 1; i <= numberOfpar; i++) {
		if (scoreOfpar[i] >= scoreOfschool[now]) {
			countOfpar++;
		}
	}
	if (countOfpar > 0) {
		cout << countOfpar;
	}
	else {
		cout << "YOU ARE THE ONLY ONE!";
	}
	/*
xuexiao
90
93
94
70
85
xuesheng
93
94
95
90
92
	*/
	getchar();
	getchar();
    return 0;
}

