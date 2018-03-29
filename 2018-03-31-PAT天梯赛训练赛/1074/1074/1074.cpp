// 1074.cpp : �������̨Ӧ�ó������ڵ㡣
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
		//������ڵ�����ӽڵ����ʾ�������
		if (arr[father] > arr[son]) break;
		else {
			//��Ȼ�ͽ������ڵ���ӽڵ��Ԫ��
			int temp = arr[father];
			arr[father] = arr[son];
			arr[son] = temp;
			//�����ӽڵ�����һ��Ҫ�Ƚϵ�λ��
			father = son;
			son = 2 * father + 1;
		}
	}
}

void HeapSort(int arr[], int len) {
	int i;
	//��ʼ���ѣ������һ�����ڵ㿪ʼ
	for (i = len / 2 - 1; i >= 0; --i) {
		Heapify(arr, i, len);
	}
	//�Ӷ��е�ȡ������Ԫ���ٵ�����
	for (i = len - 1; i > 0; --i) {
		int temp = arr[i];
		arr[i] = arr[0];
		arr[0] = temp;
		//�����ɶ�
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

