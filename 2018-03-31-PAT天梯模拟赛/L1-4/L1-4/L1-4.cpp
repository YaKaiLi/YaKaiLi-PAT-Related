#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char peopleA[100];
	char peopleB[100];
	char input[100];
	char bijiao[100] = ".";
	int times = 0;
	while(input!=bijiao){
		for(int i=0;i<100;i++){
			peopleA[i] = NULL;
		}
		gets(input);
		times++;
		if(times==2){
			for(int i=0;i<100;i++){
				peopleA[i] = input[i];
			}
		}else if(times==14){
			for(int i=0;i<100;i++){
				peopleB[i] = input[i];
			}
		}
	}
	if(times>=15){
		cout<<peopleA<<" and "<<peopleB<<" are inviting you to dinner...";
	}else if (times>=4){
		cout<<peopleA<<" is the only one for you...";
	}else{
		cout<<"Momo... No one is for you ...";
	}
	getchar();
	getchar();
	return 0;
}