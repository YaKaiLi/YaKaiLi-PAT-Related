// 1080.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int numberOfstring = 0;
	string input[100];
	int lengthSum = 0;
	cin >> numberOfstring;
	for (int i = 0; i < numberOfstring; i++) {
		cin >> input[i];
		lengthSum = lengthSum + input[i].length();
	}
	cout << lengthSum;
	getchar();
	getchar();
    return 0;
}