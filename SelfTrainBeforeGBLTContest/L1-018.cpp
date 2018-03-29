#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	int hh,mm;
	scanf("%d:%d",&hh,&mm);
	if(hh<12||(hh==12&&mm==0)){
		cout<<"Only ";
		printf("%02d",hh);
		cout<<":";
		printf("%02d",mm);
		cout<<".  Too early to Dang.";
	}else{
		if(mm>0){
			for(int i=0;i<hh-12+1;i++) cout<<"Dang";
		}else{
			for(int i=0;i<hh-12;i++) cout<<"Dang";
		}
	}
	return 0;
}
