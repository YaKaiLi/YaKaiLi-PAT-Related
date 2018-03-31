#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main(){
	int pa,pb;
	int caipana=0,caipanb=0;
	int tmp;
	cin>>pa>>pb;
	/********/
	cin>>tmp;
	if(tmp==0){
		caipana++;
	}else{
		caipanb++;
	}
	cin>>tmp;
	if(tmp==0){
		caipana++;
	}else{
		caipanb++;
	}
	cin>>tmp;
	if(tmp==0){
		caipana++;
	}else{
		caipanb++;
	}
	/************/
	//ÅÐ¶¨a
	if((pa>pb&&caipana>=1)||(pa<pb&&caipana>=3)){
		cout<<"The winner is a: "<<pa<<" + "<<caipana;
	}
	//ÅÐ¶¨b
	if((pb>pa&&caipanb>=1)||(pb<pa&&caipanb>=3)){
		cout<<"The winner is b: "<<pb<<" + "<<caipanb;
	}
	return 0;
}
