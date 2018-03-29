#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	string sex[10];
	int numberOfinput=0;
	float data[10];
	cin>>numberOfinput;
	for(int i=0;i<numberOfinput;i++){
		cin>>sex[i]>>data[i];
	}
	for(int i=0;i<numberOfinput;i++){
		if(sex[i]=="M"){
			printf("%.2f",data[i]/1.09);cout<<endl;
		}else if(sex[i]=="F"){
			printf("%.2f",data[i]*1.09);cout<<endl;
		}
	}
	return 0;
}
