#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int hh=0,mm=0;
	int times=0;
	scanf("%d:%d",&hh,&mm);
	if(hh>=12&&mm!=0){
		times = hh%12;
		if(mm>0) times++;
		for(int i=0;i<times;i++){
			cout<<"Dang";
		}
	}else{
		cout<<"Only ";
		printf("%02d",hh);
		cout<<":";
		printf("%02d",mm);
		cout<<".  Too early to Dang.";
	}
	getchar();
	getchar();
	return 0;
}