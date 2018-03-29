#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	string input;
	int countOftwo=0;
	float lengthOfinput;
	float value = 0;
	cin>>input;
	if(input[0]!='-') lengthOfinput = input.length();
	else lengthOfinput = input.length()-1;
	for(int i=0;i<input.length();i++){
		if(input[i]=='2') countOftwo++;
	}
	if(input[0]!='-'){
		if((input[input.length()-1])%2==0){
			value = (float(countOftwo)/lengthOfinput)*2*100;
		}else{
			value = (float(countOftwo)/lengthOfinput)*100;
		}
	}else{
		if((input[input.length()-1])%2==0){
			value = (float(countOftwo)/lengthOfinput)*1.5*2*100;
		}else{
			value = (float(countOftwo)/lengthOfinput)*1.5*100;
		}
	}
	printf("%.2f",value);cout<<"%";
	return 0;
}
