#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int w[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	int m[11] = { 1,0,10,9,8,7,6,5,4,3,2 };
	int flag = 0, numberOfinput = 0;
	string input = "";
	int sum = 0, yusum = 0;
	int coutendl = 0;
	//cin >> input;
	//cout << int(input[0]) << endl;
	cin >> numberOfinput;
	for (int i = 0; i < numberOfinput; i++)
	{
		cin >> input;
		for (int j = 0; j < 17; j++) {
			sum = sum + (int(input[j]) - 48)*(w[j]);
		}
		yusum = sum % 11;
		if (!(((int(input[17])-48) == 10 && (int(input[17])-48) == m[yusum]) || ((int(input[17])-48) == m[yusum]))) {
			flag = 1;
			if (coutendl > 0)
				cout << endl;
			cout << input;
			coutendl++;
		}
		sum = 0;
		input = "";
	}
	if (flag == 0) {
		cout << "All passed";
	}
	getchar();
	getchar();
    return 0;
}
