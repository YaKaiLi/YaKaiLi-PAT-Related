#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	float count=0;
	string input;
	int lie=0;
	cin>>count>>input;
	lie = round(count/2);
	for(int i=0;i<lie;i++){
		if(i!=0) cout<<endl;
		for(int j=0;j<count;j++){
			cout<<input;
		}
	}
	return 0;
}
