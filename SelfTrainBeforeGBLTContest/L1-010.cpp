#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	int input[3];
	int max=0,mid=0,min=0;
	cin>>input[0]>>input[1]>>input[2];
	sort(input,input+3);
	cout<<input[0]<<"->"<<input[1]<<"->"<<input[2];
	return 0;
}
