#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	int flag=1;
	int inputTmp=0;
	while(1){
		cin>>inputTmp;
		if(inputTmp==250){
			cout<<flag;
			break;
		}
		flag++;
	}
	return 0;
}
