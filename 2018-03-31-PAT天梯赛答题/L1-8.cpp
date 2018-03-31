#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main(){
	int countOfinput=0;
	cin>>countOfinput;
	string name[10000];
	float number[10000]={0};
	float sum=0,pingjuntwo=0;
	float minvalue=1000;
	int minzhizhen=-1;
	for(int i=0;i<countOfinput;i++){
		cin>>name[i]>>number[i];
		sum = sum+number[i];
	}
	pingjuntwo=(sum/countOfinput)/2;
	for(int i=0;i<countOfinput;i++){
		if(minzhizhen==-1){
			minvalue = abs(number[i]-pingjuntwo);
			minzhizhen=i;
		}
		if(abs(number[i]-pingjuntwo)<=abs(number[minzhizhen]-pingjuntwo)){
			minvalue = abs(number[i]-pingjuntwo);
			minzhizhen=i;
		}
	}
	cout<<int(pingjuntwo)<<" "<<name[minzhizhen];
	return 0;
}
