#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main(){
	char fuhao;
	int input;
	string data[100];
	int noSame=0;
	char dataCopy[100][100];
	cin>>fuhao>>input;
	getchar();
	for(int i=0;i<input;i++){
		getline(cin,data[i]);
	}
	for(int i=0;i<input;i++){
		for(int j=0;j<input;j++){
			dataCopy[input-i-1][input-j-1] = data[i][j];
		}
	}
	for(int i=0;i<input;i++){
		for(int j=0;j<input;j++){
			if(dataCopy[i][j] != data[i][j]) noSame=1;
		}
	}
	if(noSame==0){
		cout<<"bu yong dao le"<<endl;
		for(int i=0;i<input;i++){
			if(i!=0) cout<<endl;
			for(int j=0;j<input;j++){
				if(dataCopy[i][j] == '@') cout<<fuhao;
				else cout<<dataCopy[i][j];
			}
		}
	}else{
		for(int i=0;i<input;i++){
			if(i!=0) cout<<endl;
			for(int j=0;j<input;j++){
				if(dataCopy[i][j] == '@') cout<<fuhao;
				else cout<<dataCopy[i][j];
			}
		}
	}
	return 0;
}
