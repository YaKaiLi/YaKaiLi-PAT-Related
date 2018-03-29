// 6161.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <cstdio>
#include <string>
#include <iostream>
#include <stack>
#define INF 1000000000
#define maxn 2005
using namespace std;

int tot, n, flag;
int a[maxn];
stack<int> stk;
struct des {
	int num;
	string s;
} q[maxn];

void end()
{
	cout << "ERROR" << endl;
}

bool check(int x)
{
	if (x>INF || x<-INF) return true;
	else return false;
}

void num(int x)
{
	if (check(q[x].num)) flag = 1;
	else stk.push(q[x].num);
}

void inv()
{
	int x = stk.top();
	if (check(-x)) flag = 1;
	else {
		stk.pop();
		stk.push(-x);
	}

}

void dup()
{
	int x = stk.top();
	stk.push(x);
}

void swp()
{
	int x, y;
	x = stk.top(); stk.pop();
	y = stk.top(); stk.pop();
	if (check(x) || check(y)) flag = 1;
	else {
		stk.push(x); stk.push(y);
	}
}

void add()
{
	int x, y;
	x = stk.top(); stk.pop();
	y = stk.top(); stk.pop();
	if (check(x + y)) flag = 1;
	else stk.push(x + y);
}

void sub() {
	int x, y;
	x = stk.top(); stk.pop();
	y = stk.top(); stk.pop();
	if (check(y - x)) flag = 1;
	else stk.push(y - x);
}

void mul()
{
	int x, y;
	x = stk.top(); stk.pop();
	y = stk.top(); stk.pop();
	if (check(x*y)) flag = 1;
	else stk.push(x*y);
}

void div()
{
	int x, y;
	x = stk.top(); stk.pop();
	y = stk.top(); stk.pop();
	if (!x || check(y / x)) flag = 1;
	else stk.push(y / x);
}

void mod()
{
	int x, y;
	x = stk.top(); stk.pop();
	y = stk.top(); stk.pop();
	if (!x&&check(y%x)) flag = 1;
	else stk.push(y%x);
}

int main() {
	tot = 0;
	while (true) {
		cin >> q[tot].s;
		if (q[tot].s == "NUM") scanf("%d", &q[tot].num);
		if (q[tot].s == "END") break;
		else tot++;
	}
	scanf("%d", &n);
	for (int i = 0; i<n; i++) scanf("%d", &a[i]);
	for (int i = 0; i<n; i++) {
		while (stk.size() != 0) stk.pop();
		stk.push(a[i]);
		flag = 0;
		for (int j = 0; j<tot; j++) {
			if (check(a[i])) {
				flag = 1; break;
			}
			if (q[j].s == "NUM") num(j);
			else if (q[j].s == "POP") stk.pop();
			else if (q[j].s == "INV") inv();
			else if (q[j].s == "DUP") dup();
			else if (q[j].s == "SWP") swp();
			else if (q[j].s == "ADD") add();
			else if (q[j].s == "SUB") sub();
			else if (q[j].s == "MUL") mul();
			else if (q[j].s == "DIV") div();
			else if (q[j].s == "MOD") mod();
			if (flag == 1) break;
		}
		if (flag == 1) {
			end(); continue;
		}
		if (stk.size() != 1) end();
		else printf("%d\n", stk.top());
	}
	return 0;
}
