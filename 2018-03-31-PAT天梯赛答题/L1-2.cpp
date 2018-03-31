#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main(){
	int count = 0,input=0;
	int sum = 1;
	char out[10];
	cin>>count>>input;
	for(int i=0;i<count;i++){
		sum = sum*26;
	}
	sum = sum-input;
	for(int i=count-1;i>=0;i--){
		out[i] = char(sum%26+97);
		sum = sum/26;
	}
	//cout<<char(sum-input+97)<<endl;
	for(int i=0;i<count;i++){
		cout<<out[i];
	}
	return 0;
}
