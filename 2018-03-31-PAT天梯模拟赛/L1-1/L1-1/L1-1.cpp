#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int number = 0;
	char inNumber[3];
	char input[1005];
	/*
	char test[2] ;// -32 a-97 z-122 A-65 Z-90 huiche*-52
	gets(test);
	cout<<int(test[0]);
	getchar();
	getchar();
	return 0;
	*/
	cin>>number;
	getchar();
	gets(input);
	int countOfinNumber = 0;
	int countOfinput = 0;
	int countOflie = 0;
	int zhizhen = 0;
	/*
	for(int i=0;i<3;i++){
		if(!((int(inNumber[i]))<48||(int(inNumber[i]))>57)){
			countOfinNumber++;
		}
	}
	if(countOfinNumber==1){
		number = (int(inNumber[0])-48);
	}else if(countOfinNumber==2){
		number = (int(inNumber[0])-48)*10 + (int(inNumber[1])-48);
	}else if(countOfinNumber=3){
		number = (int(inNumber[0])-48)*100 + (int(inNumber[1])-48)*10 + (int(inNumber[2])-48);
	}
	*/
	for(int i=0;i<1005;i++){
		if(int(input[i])==-52){
			break;
		}
		countOfinput++;
	}
	countOfinput--;
	countOflie = countOfinput/number;
	if(countOfinput%number>0) countOflie++;

	for(int i=0;i<number;i++){
		if(i!=0) cout<<endl;
		for(int j=countOflie;j>0;j--){
			zhizhen = i+(j-1)*number;
			if(zhizhen>countOfinput) cout<<" ";
			else cout<<input[zhizhen];
		}
	}
	//getchar();
	//getchar();
	return 0;
}