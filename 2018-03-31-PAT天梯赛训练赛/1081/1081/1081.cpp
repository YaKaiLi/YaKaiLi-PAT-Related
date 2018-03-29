// 1081.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int isInt(float input) {
	while (input > 0) {
		input--;
	}
	if (input < 0)return 0;
	else return 1;
}

int main()
{
	int inputArray[100] = { 0 };
	int numberOfarray = 0;
	float theN = 0;
	int a, b, c, d;
	float x1, x2;
	int now = 0, nowNumber = 0;
	cin >> numberOfarray;
	for (int i = 0; i < numberOfarray; i++) {
		cin >> inputArray[i];
	}
	a = 1; b = 1; c = -(numberOfarray * 2);
	theN = numberOfarray * 2;
	d = b*b - 4 * a*c;
	if (d >= 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
	}
	else
	{
		x1 = -b / (2 * a), sqrt(-d) / (2 * a);
		x2 = -b / (2 * a), sqrt(-d) / (2 * a);
	}
	//cout << x1 << endl << x2<<endl<< isInt(x1);
	if (isInt(x1)) {
		now = 0;
		nowNumber = 1;
		while (now + nowNumber <= numberOfarray) {
			for (int i = 0; i < nowNumber; i++) {
				cout << inputArray[i];
				if (i != nowNumber - 1) cout << " ";
			}
			if (now + nowNumber != numberOfarray) cout << endl;
			now = now + nowNumber;
			nowNumber++;
		}
	}
	else {
		cout << "It is not a group of numbers!";
	}
	getchar();
	getchar();
    return 0;
}

