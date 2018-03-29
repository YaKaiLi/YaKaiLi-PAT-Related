// 1086.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include<algorithm>
#include <string>
using namespace std;

int inputZhengfu[100][2] = { 0 };
int inputQiye[100][2] = { 0 };
string nameZhengfu[100];
string nameQiye[100];

void InsertSort(int arr[][2], int n) {
	int temp0 = 0;
	int temp1 = 0;
	for (int i = 1; i < n; ++i) {
		for (int j = i; j > 0; --j) {
			if (arr[j][0] < arr[j - 1][0]) {
				temp0 = arr[j][0];
				temp1 = arr[j][1];
				arr[j][0] = arr[j - 1][0];
				arr[j][1] = arr[j - 1][1];
				arr[j - 1][0] = temp0;
				arr[j - 1][1] = temp1;
			}
		}
	}
}

int main()
{
	int numberOfinput = 0, fenlei = 0;
	int numberiQiye = 0, numberiZhengfu = 0;
	cin >> numberOfinput;
	for (int i = 0; i < numberOfinput; i++) {
		cin >> fenlei;
		if (fenlei == 0) {
			cin >> inputQiye[numberiQiye][0];
			inputQiye[numberiQiye][1] = numberiQiye;
			cin >> nameQiye[numberiQiye];
			numberiQiye++;
		}
		else if (fenlei == 1) {
			cin >> inputZhengfu[numberiZhengfu][0];
			inputZhengfu[numberiZhengfu][1] = numberiZhengfu;
			cin >> nameZhengfu[numberiZhengfu];
			numberiZhengfu++;
		}
		else {
			return 0;
		}
	}
	InsertSort(inputQiye, numberiQiye);
	InsertSort(inputZhengfu, numberiZhengfu);
	for (int i = (numberOfinput / 2)-1; i >=0; i--) {
		//cout << inputZhengfu[i][0] << " " << nameZhengfu[inputZhengfu[i][1]] << endl;
		//cout << inputQiye[i][0] << " " << nameQiye[inputQiye[i][1]] << endl;
		cout << nameQiye[inputQiye[i][1]] << " " << nameZhengfu[inputZhengfu[(numberOfinput / 2) - 1 - i][1]];
		if (i != 0)cout << endl;
	}
	getchar();
	getchar();
	getchar();
    return 0;
}