#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
	float height=0;
	float weight=0;
	cin>>height;
	weight = (height-100)*0.9*2;
	printf("%.1f",weight);
	return 0;
}
