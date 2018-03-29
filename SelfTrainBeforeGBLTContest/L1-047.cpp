#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
	string name[10];
	int data[10][2];
	int numberOfinput=0;
	int endlflag=0;
	cin>>numberOfinput;
	for(int i=0;i<numberOfinput;i++){
		cin>>name[i];
		cin>>data[i][0];
		cin>>data[i][1];
	}
	for(int i=0;i<numberOfinput;i++){
		if((data[i][0]<15||data[i][0]>20)||(data[i][1]<50||data[i][1]>70)){
			if(endlflag!=0) cout<<endl;
			endlflag=1;
			cout<<name[i];
		} 
	}
	return 0;
}
