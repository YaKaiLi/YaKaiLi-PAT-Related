#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	string input;
	int count[4]={0};
	int numberOfgplt=0;
	int flag=0;
	cin>>input;
	for(int i=0;i<input.length();i++){
		switch(input[i]){
			case 'g':count[0]++;numberOfgplt++;break;
			case 'G':count[0]++;numberOfgplt++;break;
			case 'p':count[1]++;numberOfgplt++;break;
			case 'P':count[1]++;numberOfgplt++;break;
			case 'l':count[2]++;numberOfgplt++;break;
			case 'L':count[2]++;numberOfgplt++;break;
			case 't':count[3]++;numberOfgplt++;break;
			case 'T':count[3]++;numberOfgplt++;break;
			default:break;
		}
	}
	while(numberOfgplt>0){
		if(count[0]>0){
			cout<<"G";
			count[0]--;
			numberOfgplt--;
		}
		if(count[1]>0){
			cout<<"P";
			count[1]--;
			numberOfgplt--;
		}
		if(count[2]>0){
			cout<<"L";
			count[2]--;
			numberOfgplt--;
		}
		if(count[3]>0){
			cout<<"T";
			count[3]--;
			numberOfgplt--;
		}
	}
	return 0;
}
