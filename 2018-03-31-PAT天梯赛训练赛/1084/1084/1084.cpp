// 1084.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int n, start, end, submax, left, i;
	int input[10000];
	int dp[10000];

	while (cin>>n)
	{
		if (n == 0)break;

		for (i = 0; i < n; i++)
			cin >> input[i];

		dp[0] = submax = input[0];
		start = end = input[0];

		for (i = 1; i < n; i++)
		{
			if (input[i] > submax + input[i])
				submax = left = input[i];
			else
				submax = submax + input[i];

			if (dp[i - 1] >= submax)
				dp[i] = dp[i - 1];
			else
			{
				dp[i] = submax;
				start = left;
				end = input[i];
			}
		}

		if (dp[n - 1] < 0)
			dp[n - 1] = 0, start = input[0], end = input[n - 1];
		cout << dp[n - 1] << start << end << endl;
	}
	return 0;

}

