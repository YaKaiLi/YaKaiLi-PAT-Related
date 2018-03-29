#include <iostream>
using namespace std;

int main(){
	float a,b;
	float res;
    cin>>a;
    cin>>b;
    if(b>0){
    	cout<<a<<"/"<<b<<"=";
    	res = a/b;
    	printf("%.2f",res);
	}else if(b==0){
		cout<<a<<"/"<<b<<"="<<"Error";
	}else if(b<0){
		cout<<a<<"/("<<b<<")=";
		res = a/b;
    	printf("%.2f",res);
	}
    return 0;
}
