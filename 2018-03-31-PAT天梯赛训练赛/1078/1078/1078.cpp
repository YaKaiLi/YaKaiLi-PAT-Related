// 1078.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string Peopleone = "-";
	string Peopletwo = "-";
	string input = "";
	int count = 0;
	int flagone = 0;
	int flagtwo = 0;
	while (cin>>input)
	{
		if (input == ".")break;
		if (count == 2)Peopleone = input;
		if (count == 7)Peopletwo = input;
		count++;
	}
	if (Peopleone == "-") {
		cout << "Ok...No one wants to eat with you...";
	}
	else if((Peopleone != "-") && (Peopletwo == "-")) {
		cout << Peopleone << " is the only lucky one!";
	}
	else if ((Peopleone != "-") && (Peopletwo != "-")) {
		cout << Peopleone << " and " << Peopletwo << " are so lucky!";
	}
	getchar();
	getchar();
    return 0;
}

