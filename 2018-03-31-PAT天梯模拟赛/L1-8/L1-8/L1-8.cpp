#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int numberOfinput = 0;
	int day=0,hh=0,mm=0,hhBak=0;
	cin>>numberOfinput;
	for(int i=0;i<numberOfinput;i++){
		if(i!=0) cout<<endl;
		cin>>day;
		scanf("%d:%d",&hh,&mm);
		if(day==0){
			cout<<day<<" ";
			printf("%02d:%02d",hh,mm);
		}else if(day%2==1){
			day = day%2 + day/2;
			hh = hh/2;
			mm = mm/2;
			cout<<day<<" ";
			printf("%02d:%02d",hh,mm);
		}else if(day%2==0){
			day = day%2 + day/2;
			hhBak = hh;
			hh = (hh+24)/2;
			mm = int((((float(hhBak)+24)/2)-hh)*60 + float(mm)/2) ;
			cout<<day<<" ";
			printf("%02d:%02d",hh,mm);
		}
	}
	getchar();
	getchar();
	return 0;
}