// 1074.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

void Heapify(int arr[], int first, int end) {
	int father = first;
	int son = father * 2 + 1;
	while (son < end) {
		if (son + 1 < end && arr[son] < arr[son + 1]) ++son;
		//如果父节点大于子节点则表示调整完毕
		if (arr[father] > arr[son]) break;
		else {
			//不然就交换父节点和子节点的元素
			int temp = arr[father];
			arr[father] = arr[son];
			arr[son] = temp;
			//父和子节点变成下一个要比较的位置
			father = son;
			son = 2 * father + 1;
		}
	}
}

void HeapSort(int arr[], int len) {
	int i;
	//初始化堆，从最后一个父节点开始
	for (i = len / 2 - 1; i >= 0; --i) {
		Heapify(arr, i, len);
	}
	//从堆中的取出最大的元素再调整堆
	for (i = len - 1; i > 0; --i) {
		int temp = arr[i];
		arr[i] = arr[0];
		arr[0] = temp;
		//调整成堆
		Heapify(arr, 0, i);
	}
}

void InsertSort(int arr[], int n) {
	for (int i = 1; i <= n; ++i) {
		for (int j = i; j > 0; --j) {
			if (arr[j] < arr[j - 1]) {
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
}

int main()
{
	int input[1000] = { 1000 };
	for (int i = 0; i < 1000; i++) {
		input[i] = 1000;
	}
	int numberOfinput;
	int k;
	cin >> numberOfinput;
	for (int i = 0; i < numberOfinput; i++) {
		cin >> input[i];
	}
	cin >> k;
	if (k > numberOfinput) {
		cout << "Datas:" << endl;
		for (int i = 0; i < numberOfinput; i++) {
			cout<< input[i];
			if (i != numberOfinput - 1) cout << " ";
		}
		cout << endl;
		cout << "Input ERROR: k=" << k;
	}
	else {
		cout << "Datas:" << endl;
		for (int i = 0; i < numberOfinput; i++) {
			cout << input[i];
			if (i != numberOfinput - 1) cout << " ";
		}
		cout << endl;
		HeapSort(input, numberOfinput);
		cout << "Result=" << input[numberOfinput-k];
	}
	getchar();
	getchar();
    return 0;
}

