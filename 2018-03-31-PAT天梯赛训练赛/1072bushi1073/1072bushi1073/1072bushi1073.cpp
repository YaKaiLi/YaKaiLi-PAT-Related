// 1072bushi1073.cpp : �������̨Ӧ�ó������ڵ㡣
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
	while ((c = getchar()) != '\n') //����һ���ַ�һ���ַ��жϣ�ֱ�����У��������
	{
		if (c != ' ')
		{
			//ungetc(c, stdin);//����ַ�c���ǿո񣬾�Ҫ��c�ַ����ص����У���Ȼ������ݶ�ȡ����
			//cout << int(c)-48 << endl;
			a[n] = int(c) - 48;
			n++;
		}
	}
	/*
		��һ�����뷽ʽ
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