#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int numberOfpeople=0;
	float height=0,weight=0,stdWeight=0;
	cin>>numberOfpeople;
	for(int i=0;i<numberOfpeople;i++){
		cin>>height;
		cin>>weight;
		if(i!=0) cout<<endl;
		stdWeight = (height-100)*0.9*2;
		if(abs(stdWeight-weight)<stdWeight*0.1){
			cout<<"You are wan mei!";
		}else if(stdWeight<weight){
			cout<<"You are tai pang le!";
		}else if(stdWeight>weight){
			cout<<"You are tai shou le!";
		}
	}
	getchar();
	getchar();
	return 0;
}