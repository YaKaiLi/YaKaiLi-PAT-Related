#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
	int index[10]={0};
	int flag=0;
	cin>>input;
	//cout<<int(input[0])-48;
	for(int i=0;i<input.length();i++){
		index[int(input[i])-48]++;
	}
	for(int i=0;i<10;i++){
		if(index[i]>0){
			if(flag!=0) cout<<endl;
			cout<<i<<":"<<index[i];
			flag=1;
		}
	}
	return 0;
}
