#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
	float input=0;
	float out=0;
	cin>>input;
	out =  5*(input-32)/9;
	cout<<"Celsius = "<<int(out);
	return 0;
}
