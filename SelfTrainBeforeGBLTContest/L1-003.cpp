#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
	int endlflag=0;
	cin>>input;
	int count[10]={0};
	for(int i=0;i<input.length();i++){
		count[int(input[i])-48]++;
	}
	for(int i=0;i<10;i++){
		if(count[i]>0){
			if(endlflag!=0) cout<<endl;
			cout<<i<<":";
			cout<<count[i];
			endlflag=1;
		}
	}
	return 0;
}
