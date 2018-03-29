#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void output(char input){
	switch (input){
		case '-':cout<<"fu";break;
		case '0':cout<<"ling";break;
		case '1':cout<<"yi";break;
		case '2':cout<<"er";break;
		case '3':cout<<"san";break;
		case '4':cout<<"si";break;
		case '5':cout<<"wu";break;
		case '6':cout<<"liu";break;
		case '7':cout<<"qi";break;
		case '8':cout<<"ba";break;
		case '9':cout<<"jiu";break;
	}
}

int main(){
	string input;
	cin>>input;
	for(int i=0;i<input.length();i++){
		if(i!=0) cout<<" ";
		output(input[i]);
	}
	return 0;
}
