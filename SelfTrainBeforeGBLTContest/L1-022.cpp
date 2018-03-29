#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
	int odd=0 ,even=0;
	int numberOfinput=0;
	int tmp=0;
	cin>>numberOfinput;
	for(int i=0;i<numberOfinput;i++){
		cin>>tmp;
		if(tmp%2==0){
			even++;
		}else{
			odd++;
		}
	}
	cout<<odd<<" "<<even;
	return 0;
}
