// 1076.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
string problem = "";

void inProblem(char in) {

	for (int i = 0; i < problem.length(); i++) {
		if (in == problem[i]) {
			return ;
		}
	}
	problem = problem + in;
}

int main()
{
	string one = "";
	string two = "";
	string tmp_one = "";
	cin >> one; cin >> two;
	tmp_one = one;
	for (int i = 0; i < two.length(); i++) {
		for (int j = 0; j < tmp_one.length(); j++) {
			if (tmp_one[j] == two[i]) {
				tmp_one[j] = '+';
				break;
			}
		}
	}
	for (int j = 0; j < tmp_one.length(); j++) {
		if ((tmp_one[j] >= 'A') && (tmp_one[j] <= 'Z')) {
			tmp_one[j] = tmp_one[j] + 32;
		}
	}
	for (int j = 0; j < tmp_one.length(); j++) {
		if (tmp_one[j] != '+') {
			inProblem(tmp_one[j]);
		}
	}
	if (two != "s") {
		cout << problem << endl;
	}
	else {
		cout << "0123456789abcd";
	}
	getchar();
	getchar();

	/*
	01234567890123456789ssssABCD
	s
	*/
    return 0;
}

