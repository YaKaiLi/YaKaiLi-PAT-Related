// 1072bushi1073.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>  
using namespace std;

int main()
{
	int n = 0, sum = 0;
	int a[100] = { 0 };
	char c;
	/*
	while ((c = getchar()) != '\n') //流中一个字符一个字符判断，直到换行，输入结束
	{
		if (c != ' ')
		{
			//ungetc(c, stdin);//如果字符c不是空格，就要将c字符还回到流中，不然造成数据读取错误
			//cout << int(c)-48 << endl;
			a[n] = int(c) - 48;
			n++;
		}
	}
	/*
		另一种输入方式
		*/
	while(cin>>a[n]){
		n++;
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << endl;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			if (j == i) continue;
			for (int k = 0; k<n; k++)
			{
				if ((k == i) || (k == j)) {
					continue;
				}
				sum = sum + a[i] * 100 + a[j] * 10 + a[k];
			}
		}
	}
	cout << sum;
	getchar();
	getchar();
	return 0;
}
/*
kaili

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

int main()
{
//printf("%d", 5 * 2 * (10+100+1)+3 * 2 * (10 + 100 + 1)+ 8 * 2 * (10 + 100 + 1));
int k;
int flag[1000] = { 0 };
vector<int> A;
while (cin >> k) {
A.push_back(k);
}
int sum=0;
for (int i = 0; i < A.size(); i++) {
for (int j = 0; j < A.size(); j++) {
if (j != i) {
for (int k = 0; k < A.size(); k++) {
if (k != i&&k != j) {
int tmp= A[i] * 100 + A[j] * 10 + A[k];
if (flag[tmp] == 0) {
sum += tmp;
//printf("%d %d %d\n", A[i], A[j], A[k]);
flag[tmp] = 1;
}

}

}
}

}
}
cout << sum;
return 0;
}


*/