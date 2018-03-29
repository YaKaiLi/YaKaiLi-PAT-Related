#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	float a,b;
	cin>>a>>b;
	if(b==0){
		cout<<a<<"/"<<b<<"=Error";
	}else if(b>0){
		cout<<a<<"/"<<b<<"=";
		printf("%.2f",a/b);
	}else{
		cout<<a<<"/("<<b<<")=";
		printf("%.2f",a/b);
	}
	return 0;
}
